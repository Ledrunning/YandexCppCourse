#include <iostream>

using namespace std;

int main()
{
	int menu = 0;
	cout << "Введите номер задания";
	cin >> menu;
	switch (menu)
	{
			case 1:
			{
				// На вход дается натуральное число N. Выведите следующее за ним четное число;
				int a, b = 0;
				cin >> a;
				b = (a + 2) - (a % 2);
				cout << b << endl;
			}
				
				break;

			case 2:
			{
				int a, b, c, answer;
				cin >> a >> b >> c;
				answer = ((a + 1) / 2) + ((b + 1) / 2) + ((c + 1)) / 2;
				cout << answer << endl;

			}
				break;
			case 3:
			{
				// Пирожок в столовой стоит A рублей и B копеек. 
				// Определите, сколько рублей и копеек нужно заплатить за N пирожков.
				int dollaz, cents, cakes, answer, a ,b;
				cin >> dollaz >> cents >> cakes;
				a = (dollaz * cakes) + ((cents * cakes) / 100);
				b = (cents * cakes) % 100;
				cout << a  << " "  << b  << endl;
	
			}
				break;
			case 4:
			{
				// Электронные часы показывают время в формате h : mm:ss(от 0:00 : 00 до 23 : 59 : 59), 
				// то есть сначала записывается количество часов, потом обязательно двузначное количество минут,
				// затем обязательно двузначное количество секунд.Количество минут и секунд при необходимости 
				// дополняются до двузначного числа нулями.

				int n, h, m, s, md, sd;
				cin >> n;
				h = n / 3600 % 24;
				m = n % 3600 / 60 / 10;
				md = n % 3600 / 60 % 10;
				s = n % 60 / 10;
				sd = n % 60 % 10;
				cout << h << ":" << m << md << ":" << s << sd << endl;
			}
				break;
			case 5:
			{
				int n, h, m, s, a, b, c;
				int d, e, f;
				cin >> a >> b >> c;
				h = a * 3600;
				m = b * 60;
				int h1 = h + m + c;
				cout << h1  << endl;
				cin >> d >> e >> c;
				h = d * 3600;
				m = e * 60;
				int h2 = h + m + c;
				cout << h2 << endl;
				cout << h2 - h1 << endl;
			}
				break;
			case 6:
			{
				// Длина Московской кольцевой автомобильной дороги —109 километров. 
				// Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. 
				// На какой отметке он остановится через T часов?
				int v, t;
				const int S = 109;

				cin >> v >> t;

				int stop = v * t % S;
				stop = (S + stop) % S;

				cout << stop << endl;
			}
			break;
			case 7:
			{
				// Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. 
				// Если число симметричное, то выведите 1, иначе выведите любое другое целое число. 
				// Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись 
				// дополняется слева незначащими нулями.
				int n;
				cin >> n;
				cout << (((n / 1000) - (n % 10)) * ((n / 1000) - (n % 10))) + (((n / 100 % 10) - (n / 10 % 10)) * ((n / 100 % 10) - (n / 10 % 10))) + 1;
			}
			break;
			case 8:
			{
				int a, b, h;
				int d;
				cin >> h >> a >> b;
				const int STEP = a - b;
				d = 1 + (h - a) / STEP + ((h - a) % STEP + STEP - 1) / STEP;

				cout << d << endl;
			}

			break;
	}
		
	
	system("Pause>NUL");
	return 0;
}