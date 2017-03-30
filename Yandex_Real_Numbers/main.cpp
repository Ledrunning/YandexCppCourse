#include<iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	int menu;
	cout << "Enter the menu number: " << endl;
	cin >> menu;
	switch (menu)
	{
		case 1:
		{
			// Дано положительное действительное число X. Выведите его дробную часть.
			double inVal;
			cin >> inVal;
			cout << inVal - (int)inVal;
		}
		break;

		case 2:
		{
			// Дано положительное действительное число X.
			// Выведите его первую цифру после десятичной точки.

			double inVal;
			cin >> inVal;
			cout << floor((inVal - (int)inVal) * 10);
		}
		break;
		case 3:
		{
			// Даны длины сторон треугольника. Вычислите площадь треугольника.
			double a, b, c;
			double s, p;
			cin >> a >> b >> c;
			double const VAL = 0.5;

			p = VAL * (a + b + c);
			//cout << p << endl;
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << s << endl;

		}
		break;
		case 4:
		{
			// Процентная ставка по вкладу составляет P процентов годовых, 
			// которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. 
			// Определите размер вклада через год.
			double percent, a, b, result, x, y;
			cin >> percent >> a >> b;
			
			result = (a * percent) / 100;
			result += a;
			y = modf(result, &x); // целая часть запишется в x, дробная - в y
			y *= 100;
			cout << x << " " << y << endl;
		}
		break;
		case 5:
		{
			// Процентная ставка по вкладу составляет P процентов годовых, 
			// которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. 
			// Определите размер вклада через K лет.
			int p, x, y, k;
			const double percent = 100;
			const double coins_in_rub = 100;

			cin >> p >> x >> y >> k;

			double rate = p / percent;
			double deposit = x + y / coins_in_rub;

			while (k--) 
			{
				deposit += deposit * rate;
				deposit = static_cast<int> (deposit * 100) / coins_in_rub;
			}

			int rub = static_cast<int> (deposit);
			int coins = static_cast<int> (deposit * 100) % 100;

			cout << rub << ' ' << coins;

		}
		break;
		
		case 6:
		{
			// Определите среднее значение всех элементов последовательности, завершающейся числом 0.
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(11);
			int inVal, count = 0;
			double sum = 0, average = 0;

			while (cin >> inVal && inVal != 0)
			{
				count++;
				sum += (double)inVal;
			}
			average = (double)sum / (double)count;
			//cout << setprecision(11);
			cout << average;
		}
		break;
		case 7:
		{
			// Дана последовательность натуральных чисел x1, x2, ..., xn.
			// Стандартным отклонением называется величина
			// где - среднее значение последовательности.
			// Определите стандартное отклонение для данной последовательности натуральных чисел, 
			// завершающейся числом 0.
			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(11);

			int num;
			int cnt = 0;
			int sum = 0;
			int double_x = 0; // x ^ 2
			double mean;
			double st_dev;

			while (cin >> num && num != 0) 
			{
				++cnt;
				double_x += num * num;
				sum += num;
			}

			mean = static_cast<double> (sum) / cnt;

			st_dev = sqrt((double_x - 2 * mean * sum + cnt * mean * mean) / (cnt - 1));
			cout << st_dev;

		}
		break;

		case 8:
		{
			// Сначала программе подается на вход целое неотрицательное число n ≤ 20, 
			// затем действительное число x, затем следует n+1 вещественное число — 
			// коэффициенты многочлена от старшего к младшему. 
			int n;
			double x;
			double res = 0;
			double coef;

			cin >> n >> x;

			while (n--) 
			{
				cin >> coef;
				res += coef;
				res *= x;
			}

			cin >> coef;
			res += coef;
			cout << res;
		}
		break;
		
		case 9:
		{
			// Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . 
			// Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
			double a, b, c;
			double r1, r2;

			cin >> a >> b >> c;

			double discr = b * b - 4 * a * c;

			if (discr >= 0)
			{
				if (discr > 0)
				{
					r1 = (-b + sqrt(discr)) / (2 * a);
					r2 = (-b - sqrt(discr)) / (2 * a);

					cout << min(r1, r2) << ' ' << max(r1, r2);
				}
				else
				{
					r1 = -b / (2 * a);
					cout << r1;
				}
			}
		}
		break;

		case 10:
		{
			// Даны действительные коэффициенты a, b, c. 
			// Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
			double a, b, c;
			double r1, r2;
			const int one_root = 1;
			const int two_roots = 2;
			const int inf_roots = 3;
			const int no_roots = 0;

			cin >> a >> b >> c;

			if (a != 0) {
				double discr = b * b - 4 * a * c;
				if (discr > 0) {
					r1 = (-b - sqrt(discr)) / (2 * a);
					r2 = (-b + sqrt(discr)) / (2 * a);
					cout << two_roots << ' ' << min(r1, r2) << ' ' << max(r1, r2);
				}
				else if (discr == 0)
				{
					r1 = -b / (2 * a);
					cout << one_root << ' ' << r1;
				}
				else
				{
					cout << no_roots;
				}
			}
			else
			{
				if (b == 0 && c == 0)
				{
					cout << inf_roots;
				}
				else if (b != 0)
				{
					r1 = -c / b;
					cout << one_root << ' ' << r1;
				}
				else
				{
					cout << no_roots;
				}
			}
		}
		break;

		case 11:
		{
			// Даны вещественные числа a, b, c, d, e, f.Известно, что система линейных уравнений;
			double a, b, c, d, e, f;
			double x, y;

			cin >> a >> b >> c >> d >> e >> f;

			double det = a * d - b * c;

			x = (e * d - b * f) / det;
			y = (a * f - e * c) / det;

			cout << x << ' ' << y;
		}
		break;
		case 12:
		{
			// Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
			double a, b, c, d, e, f;
			double x, y;
			const int no_roots = 0;
			const int kx_roots = 1;
			const int one_xy_root = 2;
			const int one_x = 3;
			const int one_y = 4;
			const int inf_roots = 5;

			cin >> a >> b >> c >> d >> e >> f;

			double det = a * d - b * c;
			double det_x = (e * d - b * f);
			double det_y = (a * f - e * c);
			bool x_null = a == 0 && c == 0;
			bool y_null = b == 0 && d == 0;

			if (det != 0)
			{
				x = det_x / det;
				y = det_y / det;
				cout << one_xy_root << ' ' << x << ' ' << y;
			}
			else
			{
				if (det_x == 0 && det_y == 0)
				{
					if (x_null && y_null)
					{
						if (e != 0 || f != 0)
						{
							cout << no_roots;
						}
						else
						{
							cout << inf_roots;
						}
					}
					else if (x_null)
					{
						if (b != 0)
						{
							y = e / b;
						}
						else
						{
							y = f / d;
						}

						cout << one_y << ' ' << y;
					}
					else if (y_null)
					{
						if (a != 0)
						{
							x = e / a;
						}
						else
						{
							x = f / c;
						}

						cout << one_x << ' ' << x;
					}
					else
					{
						double bi, k;

						if (b != 0)
						{
							bi = e / b;
							k = -a / b;
						}
						else
						{
							bi = f / d;
							k = -c / d;
						}

						cout << kx_roots << ' ' << k << ' ' << bi;
					}
				}
				else
				{
					cout << no_roots;
				}
			}
		}
		break;
	}

	system("pause>NUL");
	return 0;
}

