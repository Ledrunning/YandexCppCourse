#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char* argv[])
{
	int menu;
	cout << "Please enter menu number" << endl;
	cin >> menu;
	switch (menu)
	{
		case 1:
		{
			// Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).
			int size;
			vector <int> arr;
			cin >> size;
			
			for (int i = 0; i !=size; i++)
			{
				int tmp;
				cin >> tmp;
				arr.push_back(tmp);
			}
			//cout << arr.capacity();
			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] % 2 != 0)
					cout << arr[i] << " ";
			}

		}
		break;

		case 2:
		{
			// В первой строке вводится количество элементов в массиве. 
			// Во второй строке вводятся элементы массива.
			int size;
			vector<int> arr;
			cin >> size;

			for (int i = 0; i !=size; i++)
			{
				int tmp;
				cin >> tmp;
				arr.push_back(tmp);
			}

			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i] % 2 == 0)
					cout << arr[i] << " ";
			}

		}
		break;

		case 3:
		{
			// Найдите количество положительных элементов в данном массиве.
			
			int size;
			vector<int> arr;
			cin >> size;

			for (int i = 0; i != size; i++)
			{
				int tmp;
				cin >> tmp;
				if (arr[i] > 0)
					arr.push_back(tmp);
			}

			cout << arr.size()<< " ";
			
		}
		break;

		case 4:
		{
			// Дан массив чисел. Выведите все элементы массива,
			// которые больше предыдущего элемента .

			int inVal;
			vector<int> arr;

			cin >> inVal;

			for (int i = 0; i < inVal; i++) {
				
				int tmp;
				cin >> tmp;
				arr.push_back(tmp);
			}

			for (int i = 1; i < arr.size(); ++i) {
				if (arr[i - 1] < arr[i]) {
					cout << arr[i] << ' ';
				}
			}


		}
		break;

		case 5:
		{
			// Дан список чисел. Если в нем есть два соседних элемента одного знака,
			// выведите эти числа.Если соседних элементов одного
			// знака нет - не выводите ничего.Если таких пар соседей несколько - выведите первую пару.
			int inVal;
			vector<int> arr;

			cin >> inVal;

			for (int i = 0; i < inVal; ++i) {
				int tmp;

				cin >> tmp;
				arr.push_back(tmp);
			}

			bool pair = false;

			for (int i = 1; i < arr.size() && !pair; ++i) 
			{
				if (arr[i - 1] < 0 && arr[i] < 0 || arr[i - 1] > 0 && arr[i] > 0) 
				{
					cout << arr[i - 1] << ' ' << arr[i];
					pair = true;
				}
			}
		}
		break;

		case 6:
		{
			// 1 -3 4 -2 1
			// -1 2 3 -1 -2
			// Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. 
			// Если соседних элементов одного знака нет - не выводите ничего.
			// Если таких пар соседей несколько - выведите первую пару.
			// Формат входных 
			// В первой строке вводится количество элементов в массиве.Во второй строке вводятся элементы массива.
			// Все числа отличны от нуля. Формат выходных данных. Выведите ответ на задачу.
			// Элементы выводятся в порядке неубывания.

			// это значит, что вообще  они должны идти по возрастанию,
			// но если вдруг равны, то выводятся рядом, друг за другом

			int n{};

			std::cin >> n;

			std::vector<int> arr(n);

			std::copy_n(std::istream_iterator<int>(std::cin), n, arr.begin());

			auto it = std::adjacent_find(arr.begin(), arr.end(),
				[](const int n1, const int n2)
			{
				return (n1 < 0 && n2 < 0) || (n1 > 0 && n2 > 0);
			});

			if (it != arr.end())
			{
				if (*it > *(it + 1))
					std::swap(*it, *(it + 1));

				std::cout << *it << " " << *(it + 1) << "\n";
			}
		}
		break;

		default:
			break;
	}

	system("pause");
	return 0;
}

