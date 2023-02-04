#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int min(int a, int b);
int min4(int a, int b, int c, int d);
double distance(double x1, double y1, double x2, double y2);
bool IsPointInSquare(double x, double y);
bool IsPointInSquare(int x, int y);
bool IsPointInCircle(double x, double y, double xc, double yc, double r);
bool IsPointInCircle(double x, double y);
bool IsPointInsideCircle(double x, double y);
bool IsPointInArea(double x, double y);
double power(double x, int n);
int MinDivisor(int n);
bool IsPrime(int n);
double fastPow(double a, int n);
int sumSeq(void);
int Fibonacci(int fib);
int BallFall(int eggs, int floors);
bool Promising(const vector<int>& field, int queen_num, int pos);
void Queens(vector<int>& field, int queen_num, int& cnt);

int main(int argc, char* argv[])
{
	int menu;
	cout << "Enter menu value" << endl;
	cin >> menu;

	switch (menu)
	{
			case 1:
			{
				/*
					Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
					Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
					Считайте четыре целых числа и выведите их минимум.
					Формат входных данных
					Вводятся четыре целых числа.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input:
					4
					5
					6
					7
					Sample Output:
					4
				*/
				int a, b, c, d;
				cin >> a >> b >> c >> d;
				min(a, b);
				cout << min4(a, b, c, d) << endl;

			}
			break;

			case 2:
			{
				/*
				Даны четыре действительных числа: x1, y1, x2, y2. Напишите функцию distance(x1, y1, x2, y2), 
				вычисляющую расстояние между точкой (x1. y1) и (x2, y2). 
				Считайте четыре действительных числа и выведите результат работы этой функции.

				Формат входных данных
				Вводятся четыре действительных числа.
				Формат выходных данных
				Выведите ответ на задачу.
				Sample Input:
				0
				0
				1
				1
				Sample Output:
				1.41421
				*/
				cout.setf(ios::showpoint);
				cout.setf(ios::fixed);
				cout.precision(5);
				double x1, y1, x2, y2;
				cin >> x1 >> y1 >> x2 >> y2;
				cout << distance(x1, y1, x2, y2) << endl;

			}

			break;

			case 3:
			{
				/*
					Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y)
					заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, 
					выведите слово YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.
					Решение должно содержать функцию IsPointInSquare(x, y), возвращающую true, если точка принадлежит квадрату и false, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInSquare и в зависимости от возвращенного значения вывести на экран необходимое сообщение.

					Функция IsPointInSquare не должна содержать инструкцию if.
					Формат входных данных
					Вводятся два действительных числа.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					0
					0
					Sample Output 1:
					YES
					Sample Input 2:
					3
					-7
					Sample Output 2:
					NO
				*/
				double x, y;
				cin >> x >> y;
				if (IsPointInSquare(x, y))
					cout << "YES" << endl;
				else cout << "NO" << endl;

			}
			break;

			case 4:

			{
				/*
					Даны два действительных числа x и y. Проверьте, принадлежит ли точка с координатами (x, y) 
					заштрихованному квадрату (включая его границу). Если точка принадлежит квадрату, 
					выведите слово YES, иначе выведите слово NO. На рисунке сетка проведена с шагом 1.
					Решение должно содержать функцию IsPointInSquare(x, y), возвращающую True, 
					если точка принадлежит квадрату и False, если не принадлежит. 
					Основная программа должна считать координаты точки, вызвать функцию 
					IsPointInSquare и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
					Функция IsPointInSquare не должна содержать инструкцию if.
					Формат входных данных
					Вводятся два действительных числа.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					0
					0
					Sample Output 1:
					YES
					Sample Input 2:
					1
					1
					Sample Output 2:
					NO
				*/

				// Для яндекса все инты в double!!!;

				int x, y;
				cin >> x >> y;
				if (IsPointInSquare(x, y))
					cout << "YES" << endl;
				else cout << "NO" << endl;

			}
			break;

			case 5:
			{
				/*
					Даны пять действительных чисел: x, y, xc, yc, r. Проверьте, принадлежит ли точка (x, y) 
					кругу с центром (xc, yc) и радиусом r. Если точка принадлежит кругу, выведите слово YES, 
					иначе выведите слово NO.
					Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), 
					возвращающую True, если точка принадлежит кругу и False, если не принадлежит.
					Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle 
					и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
					Функция IsPointInCircle не должна содержать инструкцию if.
					Формат входных данных
					Вводятся пять действительных чисел.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					0.5
					0.5
					0
					0
					1
					Sample Output 1:
					YES
					Sample Input 2:
					0.5
					0.5
					1
					1
					0.1
					Sample Output 2:
					NO
					Нажмите, чтобы начать решать ✍

				*/
				double x, y, xc, yc, r;
				cin >> x >> y >> xc >> yc >> r;
				if (IsPointInCircle(x, y, xc, yc, r))
					cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			break;

			case 6:
			{
				/*
					Проверьте, принадлежит ли точка данной закрашенной области:
					Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
					Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInArea и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
					Функция IsPointInArea не должна содержать инструкцию if.
					Формат входных данных
					Вводятся два действительных числа.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					-4
					-4
					Sample Output 1:
					NO
					Sample Input 2:
					-4
					-3
					Sample Output 2:
					NO
				*/
				double x, y;
				cin >> x >> y;
				if (IsPointInArea(x, y))
					cout << "YES" << endl;
				else cout << "NO" << endl;

			}
			break;

			case 7:
			{
				/*
					Дано действительное положительное число a и целоe число n.

					Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).

					Формат входных данных
					Вводится действительное положительное число a и целоe число n.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					2
					1
					Sample Output 1:
					2
					Sample Input 2:
					2
					2
					Sample Output 2:
					4
					Нажмите, чтобы начать решать ✍

				*/

				double a;
				int n;

				cin >> a >> n;

				cout << power(a, n) << endl;

			}
			break;

			case 8:
			{
				/*
					Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.
					Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.
					Указание. Если у числа n нет делителя, меньшего n , то число n — простое и ответом будет само число n.
					Формат входных данных
					Вводится натуральное число.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					4
					Sample Output 1:
					2
					Sample Input 2:
					5
					Sample Output 2:
					5
				*/
				int n;

				cin >> n;
				cout << MinDivisor(n);


			}
			break;

			case 9:
			{
				/*
					Дано натуральное число n > 1. Проверьте, является ли оно простым. 
					Программа должна вывести слово YES, если число простое и NO, если число составное.
					Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и
					False для составных чисел. Количество операций в программе должно быть пропорционально корню из n.
					Формат входных данных
					Вводится натуральное число.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					2
					Sample Output 1:
					YES
					Sample Input 2:
					4
					Sample Output 2:
					NO
				*/
				int n;
				cin >> n;
				if (IsPrime(n))
					cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			break;

			case 10:
			{
				/*
					Возводить в степень можно гораздо быстрее, чем за n умножений! 
					Для этого нужно воспользоваться следующими рекуррентными соотношениями:

					an = (a2)n/2  при четном n,

					an = a × an−1 при нечетном n.

					Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.
					Формат входных данных
					Вводятся действительное число a и целое неотрицательное число n.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input 1:
					2.0
					1
					Sample Output 1:
					2
					Sample Input 2:
					2
					2
					Sample Output 2:
					4
				*/
				double a;
				int n;

				cin >> a >> n;
				cout << fastPow(a, n);

			}
			break;

			case 11:
			{
				/*
					Дана последовательность чисел, завершающаяся числом 0. Найдите сумму всех этих чисел, не используя цикл.
					Формат входных данных
					Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input:
					1
					7
					9
					0
					Sample Output:
					17
					Нажмите, чтобы начать решать

				*/

				cout << sumSeq() << endl;
			}
			break;

			case 12:
			{
				/*
					Напишите функцию fib(n), которая по данному целому положительному n возвращает n-e число Фибоначчи.
					В этой задаче нельзя использовать циклы - используйте рекурсию.
					Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.
					Формат входных данных
					Вводится целое число.
					Формат выходных данных
					Выведите ответ на задачу.
					Sample Input:
					1
					Sample Output:
					1
				*/

				int n;

				cin >> n;
				cout << Fibonacci(n);
			}
			break;

			case 13:
			{
				/*
				В небоскребе n этажей. Известно, что если уронить стеклянный шарик с этажа номер p, и шарик разобьется, то если уронить шарик с этажа номер p+1, то он тоже разобьется. Также известно, что при броске с последнего этажа шарик всегда разбивается.Вы хотите определить минимальный номер этажа, при падении с которого шарик разбивается. Для проведения экспериментов у вас есть два шарика. Вы можете разбить их все, но в результате вы должны абсолютно точно определить этот номер.
				Определите, какого числа бросков достаточно, чтобы заведомо решить эту задачу.
				Формат входных данных
				Программа получает на вход количество этажей в небоскребе.
				Формат выходных данных
				Требуется вывести наименьшее число бросков, при котором можно всегда решить задачу.
				Примечание
				Комментарий к первому примеру. Нужно бросить шарик со 2-го этажа. Если он разобьется, 
				то бросим второй шарик с 1-го этажа, а если не разобьется - то бросим шарик с 3-го этажа.
				Подсказки
				1. Как следует действовать, если шарик был бы только один?
				2. Пусть шариков два и мы бросили один шарик с этажа номер k. Как мы будем действовать 
				в зависимости от того, разобьется ли шарик или нет?
				3. Пусть f(n) - это минимальное число бросков, за которое можно определить искомый этаж, 
				если бы в небоскребе было n этажей. Выразите f(n) через значения f(a) для меньших значений a.
				Sample Input 1:
				4
				Sample Output 1:
				2
				Sample Input 2:
				5
				Sample Output 2:
				3
				Нажмите, чтобы начать решать ✍

				*/
				const int BALLS = 2;
				int n;

				cin >> n;
				cout << BallFall(BALLS, n - 1) << endl;
			}
			break;

			case 14:
			{
				/*
					Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей,
					не бьющих друг друга.
					Формат входных данных
					Задано единственное число N. (N ≤ 10)
					Формат выходных данных
					Выведите ответ на задачу.
					Подсказка
					Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец.
					Если на эту клетку ставить ферзя нельзя (он бьет предыдущих),
					то такой вариант даже не стоит рассматривать. Когда вы успешно поставили ферзя в последний 
					столбец - увеличивайте счетчик.
					Sample Input:
					8
					Sample Output:
					92
				*/
				const int FIRST_QUEEN = 0;
				int n;
				// our chess board
				vector<int> v;
				int cnt = 0;

				cin >> n;
				v = vector<int>(n);
				Queens(v, FIRST_QUEEN, cnt);
				cout << cnt;
			}
			break;
	}

	system("pause");
	return 0;
}


int min(int a, int b)
{
	return (a < b) ? a : b;
}
int min4(int a, int b, int c, int d)
{
	int firstMin = min(a, b);
	int secondMin = min(c, d);
	return min(firstMin, secondMin);
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool IsPointInSquare(double x, double y) 
{
	const double XL = -1, XR = 1;
	const double YB = -1, YT = 1;

	bool xInSq = (x >= XL) && (x <= XR);
	bool yInSq = (y >= YB) && (y <= YT);

	return xInSq && yInSq;
}

bool IsPointInSquare(int x, int y)
{
	const int XL = -1, XR = 1;
	const int YB = -1, YT = 1;

	bool xInSq = (x >= XL) && (x <= XR);
	bool yInSq = (y >= YB) && (y <= YT);

	bool sumXY = abs(x) + abs(y) <= 1;

	return xInSq && yInSq && sumXY;

	return xInSq && yInSq;
}

bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
	bool inCircle = (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;

	return inCircle;
}

bool IsPointInCircle(double x, double y) 
{
	const double xc = -1, yc = 1;
	const double r = 2;

	return (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r;
}

bool IsPointInsideCircle(double x, double y) 
{
	const double xc = -1, yc = 1;
	const double r = 2;

	return (x - xc) * (x - xc) + (y - yc) * (y - yc) < r * r;
}

bool IsPointInArea(double x, double y) 
{
	bool left_line_right = (x + y >= 0);
	bool right_line_left = (2 * x - y + 2 <= 0);
	bool left_line_left = (x + y <= 0);
	bool right_line_right = (2 * x - y + 2 >= 0);

	bool in_circ_area = IsPointInCircle(x, y) && left_line_right && right_line_left;
	bool in_bottom = !IsPointInsideCircle(x, y) && left_line_left && right_line_right;

	return in_circ_area || in_bottom;
}

double power(double x, int n) 
{
	double res = 1;

	if (n < 0) 
	{
		x = 1 / x;
		n = -n;
	}

	while (--n >= 0) 
	{
		res *= x;
	}

	return res;
}

int MinDivisor(int n) 
{
	int div = 2;

	for (; div < sqrt(n) && n % div != 0; ++div) {}
	
	if (n % div != 0) 
	{
		div = n;
	}

	return div;
}

bool IsPrime(int n)
{
	int div = 2;

	while (div < sqrt(n) && n % div != 0) 
	{
		++div;
	}

	return (n % div != 0 || n == div);
}

double fastPow(double a, int n) 
{
	double res = 1;

	if (n != 0) {
		if (n % 2 == 0)
		{
			res = fastPow(a * a, n / 2);
		}
		else 
		{
			res = a;
			res *= fastPow(a, n - 1);
		}
	}

	return res;
}

int sumSeq(void)
{
	int num;
	cin >> num;
	return (num == 0) ? num : num + sumSeq();
}

int Fibonacci(int fib)
{
	if (fib == 1 || fib == 2)
	
		return 1;

	return Fibonacci(fib-1) + Fibonacci(fib - 2);
	
}

int BallFall(int eggs, int floors) 
{
	
	if (eggs == 1)
		return floors;

	
	if (floors <= 2)
		return floors;

	int minDrops = -1;
	for (int floor = 1; floor < floors; ++floor) 
	{
		int maxDropBelow = BallFall(eggs - 1, floor - 1);
		int maxDropAbove = BallFall(eggs, floors - floor);
		int maxK = max(maxDropBelow, maxDropAbove);

		if (minDrops == -1 || minDrops > maxK) 
		{
			minDrops = maxK;
		}
	}

	return minDrops + 1;
}

bool Promising(const vector<int>& field, int queen_num, int pos) 
{
	for (int j = 0; j < queen_num; ++j) 
	{
		
		if (field[j] == pos || j - field[j] == queen_num - pos || j + field[j] == queen_num + pos) 
		{
			return false;
		}
	}

	return true;
}

void Queens(vector<int>& field, int queen_num, int& cnt) 
{
	
	if (queen_num == field.size())
	{
		++cnt;
	}
	else {
		
		for (int i = 0; i < field.size(); ++i) 
		{
		
			if (Promising(field, queen_num, i)) 
			{
				field[queen_num] = i;
				Queens(field, queen_num + 1, cnt);
			}
		}
	}
}