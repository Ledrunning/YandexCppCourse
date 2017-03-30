#include <iostream>
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
				// По данному целому числу N распечатайте все квадраты натуральных чисел,
				// не превосходящие N, в порядке возрастания.
				int inputValue;
				int a = 1;
				int sq = a * a;

				cin >> inputValue;

				while (sq <= inputValue)
				{
					cout << sq << ' ';
					++a;
					sq = a * a;
					
				}


			}
			break;

			case 2:
			{
				// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
				unsigned short inputValue;
				int sNdiv = 2;

				cin >> inputValue;

				while (inputValue % sNdiv != 0)
				{
					sNdiv += 1;
				}
				cout << sNdiv << " " << endl;
			}
			break;
			
			case 3:
			{
				// По данному числу N распечатайте все целые степени двойки, не превосходящие 
				// N, в порядке возрастания.

				int inputVal, i = 1;
				const int TWO = 2;
				cin >> inputVal;

				while (i <= inputVal)
				{
					i *= TWO;
					cout << i << " ";
				}

			}
			break;
			
			case 4:
			{
				// Дано натуральное число N. Выведите слово YES, если число 
				// N является точной степенью двойки, или слово NO в противном случае.

				int inVal, val = 1;
				cin >> inVal;

				while (val != inVal && val <= inVal)
				{
					val *= 2;
				}
				if (val == inVal)
				{
					cout << "YES";
				}
				else
				{
					cout << "NO";
				}

			}
			break;

			case 5:
			{
				// Программа получает на вход последовательность целых неотрицательных чисел, 
				// каждое число записано в отдельной строке. Последовательность завершается числом 0, 
				// при считывании которого программа должна закончить свою работу и вывести количество 
				// членов последовательности (не считая завершающего числа 0).
				// Числа, следующие за числом 0, считывать не нужно.
				int inVal = 0, buffer;
				
				while (cin >> buffer && buffer != 0) 
				{
					++inVal;
				}
				cout << inVal;
			}
			break;
			case 6:
			{
				// Определите сумму всех элементов последовательности, завершающейся числом 0.
				int sum = 0, buffer;

				while (cin >> buffer && buffer != 0)
				{
					sum += buffer;
				}
				cout << sum;
			}
			break;
			
			case 7:
			{
				// Последовательность состоит из натуральных чисел и завершается числом 0. 
				// Определите значение наибольшего элемента последовательности.
				int maxVal = 0, buffer;

				while (cin >> buffer && buffer != 0)
				{
					if (buffer > maxVal)
						maxVal = buffer;
				}
				cout << maxVal;
			}
			break;
			case 8:
			{
				// Последовательность состоит из натуральных чисел и завершается числом 0. 
				// Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
				int maxElement = 0, buffer, count = 0;

				while (cin >> buffer && buffer != 0)
				{
					
					if (maxElement < buffer) 
					{
						count = 1;
						maxElement = buffer;
					}
					else if (buffer == maxElement) 
					{
						++count;
					}
						
				}
				cout << count << " ";
			}
			break;
			case 9:
			{
				// Последовательность состоит из натуральных чисел и завершается числом 0. 
				// Определите значение второго по величине элемента в этой последовательности, 
				// то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.

				int n;
				int max = -1;
				int s_max = -1;

				while (cin >> n && n != 0)
				{
					if (max <= n) 
					{
						s_max = max;
						max = n;
					}
					else if (s_max < n) 
					{
						s_max = n;
					}
				}

				cout << s_max;
			}
			break;
			case 10:
			{
				// Последовательность Фибоначчи определяется так:
				int n;
				int f_0 = 0;
				int f_1 = 1;

				cin >> n;

				while (--n) {
					int tmp = f_1;

					f_1 += f_0;
					f_0 = tmp;
				}

				cout << f_1;


			}
			break;
			case 11:
			{
				// Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, 
				// то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи,
				// выведите число -1.
				int inVal;
				int counter = 1; 
				int f_0 = 0;
				int f_1 = 1;

				cin >> inVal;

				while (f_1 < inVal) 
				{
					int tmp = f_1;

					++counter;
					f_1 += f_0;
					f_0 = tmp;
				}

				if (f_1 == inVal) 
				{
					cout << counter;
				}
				else 
				{
					cout << -1;
				}
			}
			break;
			case 12:
			{
				// Дана последовательность натуральных чисел, завершающаяся числом 0.
				// Определите, какое наибольшее число подряд идущих элементов этой 
				// последовательности равны друг другу.
				int count = 1;
				int n_max = 0;
				int cur = -1;
				int prev = -1;

				while (cin >> cur && cur != 0) 
				{
					if (prev != -1) 
					{
						if (cur == prev) 
						{
							++count;
						}
						else 
						{
							if (n_max < count) 
							{
								n_max = count;
							}
							count = 1;
						}
					}

					prev = cur;
				}

				if (count > n_max) {
					n_max = count;
				}

				cout << n_max;
			}
			break;
			case 13:
			{
				// Дана последовательность натуральных чисел, завершающаяся числом 0.
				// Определите количество строгих локальных максимумов в этой последовательности.
				int prev = -1;
				int cur = -1;

				bool prev_gr = false;
				int cnt = 0;

				// Option 1
				while (cin >> cur && cur != 0) 
				{
					if (prev != -1) 
					{
						if (prev < cur && !prev_gr) 
						{
							prev_gr = true;
						}
						else if (prev_gr) 
						{
							if (cur < prev) 
							{
								++cnt;
								prev_gr = false;
							}
							else if (cur == prev) 
							{
								prev_gr = false;
							}
						}
						else 
						{
							prev_gr = false;
						}
					}

					prev = cur;
				}

				// Option 2

				if (cin >> prev && prev != 0) 
				{
					if (cin >> cur && cur != 0) 
					{
						int next;
						if (cin >> next) 
						{
							while (next != 0) 
							{
								if (prev < cur && cur > next) 
								{
									++cnt;
								}
								prev = cur;
								cur = next;
								cin >> next;
							}
						}
					}
				}

				cout << cnt;
			}
			break;
			case 14:
			{
				// Определите наименьшее расстояние между двумя локальными максимумами последовательности 
				// натуральных чисел, завершающейся числом 0. Если в последовательности нет двух локальных 
				// максимумов, выведите число 0.
				int prev, cur, next;
				int dist = 0;
				int cur_dist = 0;
				int min_dist = 0;

				if (cin >> prev && prev != 0) 
				{
					if (cin >> cur && cur != 0)
					{
						if (cin >> next) 
						{
							int pos = 2;
							while (next != 0) 
							{
								if (prev < cur && cur > next) 
								{
									if (dist != 0) 
									{
										cur_dist = pos - dist;
										if (min_dist == 0) 
										{
											min_dist = cur_dist;
										}
										else 
										{
											min_dist = min(cur_dist, min_dist);
										}
									}

									dist = pos;
								}
								++pos;
								prev = cur;
								cur = next;
								cin >> next;
							}
						}
					}
				}

				cout << min_dist;
			}
			break;
	}
	system("pause");
	return 0;
}