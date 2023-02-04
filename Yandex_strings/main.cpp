#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool CheckIpNumber(const string& num);
bool IsIpAddr(const string& ip);


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
					По введенному символу определите, является ли он цифрой.
					Входные данные
					Вводится единственый символ.
					Выходные данные
					Выведите "yes", если символ является цифрой и "no" в противном случае. Обратите внимание, что слова нужно выводить маленькими буквами.
					Sample Input 1:
					1
					Sample Output 1:
					yes
					Sample Input 2:
					a
					Sample Output 2:
					no
				*/
				char c;
				cin >> c;

				if (c >= '0' && c <= '9')
					cout << "yes" << endl;
				else cout << "no" << endl;

			}
			break;

			case 2:
			{
				/*
					Переведите символ в верхний регистр.

					Входные данные
					Вводится единственый символ.
					Выходные данные
					Если введеный символ является строчной буквой латинского алфавита, 
					то выведите такую же заглавную букву. В противном случае выведите тот же символ, 
					который был введен.
					Sample Input:
					b
					Sample Output:
					B
				*/

				char c;
				cin >> c;

				if (c >= 'a' && c <= 'z')
				{
					int temp = c - 'a';
					c = 'A' + temp;
				}

				cout << c << endl;
			}
			break;

			case 3:
			{
				/*
					Вводится один символ, измените его регистр. То есть, если была введена строчная буква - 
					сделайте ее заглавной и наоборот. Символы, не являющиеся латинской буквой, 
					нужно выводить без изменений.
					Входные данные
					Вводится единственый символ.
					Выходные данные
					Выведите ответ на задачу.
					Sample Input:
					b
					Sample Output:
					B
				*/

				char c;
				cin >> c;

				if (c >= 'a' && c <= 'z')
				{
					int temp = c - 'a';
					c = 'A' + temp;
					cout << c << endl;
				}
				else if (c >= 'A' && c <= 'Z')
				{
					int temp = c - 'A';
					c = 'a' + temp;
					cout << c << endl;
				}
				/*else if (c >= 'а' && c <= 'я' || c >= 'А' && c <= 'Я')
					cout << c;*/
				else cout << c;
			}
			break;
			case 4:
			{
				/*
					Дана строка, содержащая пробелы. Найдите, сколько в ней слов 
					(слово – это последовательность непробельных символов, слова разделены одним пробелом, 
					первый и последний символ строки – не пробел).

					Входные данные

					На вход подается несколько строк.
					Выходные данные

					Необходимо вывести количество слов в первой из введенных строк.
					Примечание
					﻿В этой задаче может быть полезен метод find с двумя параметрами. Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.
					Sample Input:
					In the town where I was born
					Sample Output:
					7
				*/
				string str;
				int pos = 0;
				int cnt = 1;

				getline(cin, str);

				while ((pos = str.find(" ", pos)) != string::npos)
				{
					++cnt;
					++pos;
				}

				cout << cnt;
			}
			break;

			case 5:
			{
				/*
					По данной строке определите, является ли она палиндромом (то есть, читается одинаково 
					как слева-направо, так и справа-налево).
					Входные данные
					На вход подается 1 строка без пробелов.
					Выходные данные
					Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

					Sample Input:
					kayak
					Sample Output:
					yes
					Нажмите, чтобы начать решать ✍

				*/

				string str, tmp;
				cin >> str;
				tmp = str;
				reverse(str.begin(), str.end());
				if (str == tmp)
					cout << "yes";
				else
					cout << "no";

			}
			break;

			case 6:
			{
				/*
					Найдите в данной строке самое длинное слово и выведите его.
					Входные данные
					Вводится одна строка. Слова в ней отделены одним пробелом.
					Выходные данные
					Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

					Sample Input:
					Everyone of us has all we need
					Sample Output:
					Everyone
				*/
				string str;
				string longestWord;

				while (cin >> str) 
				{
					if (longestWord.empty() || str.size() > longestWord.size()) 
					{
						longestWord = str;
					}
				}

				cout << longestWord;

			}
			break;
			case 7:
			{
				/*
					В сети интернет каждому компьютеру присваивается четырехбайтовый код, 
					который принято записывать в виде четырех чисел, каждое из которых может принимать 
					значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов: 
					127.0.0.0
					192.168.0.1
					255.0.255.255
					Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

					Входные данные

					Программа получает на вход строку из произвольных символов.
					Выходные данные

					Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
					Примечание

					Для перевода из строки в число удобно пользоваться функцией stoi, 
					которая принимает на вход строку, а возвращает число.
					Sample Input:
					127.0.0.1
					Sample Output:
					YES
				*/
				string ipStr;

				cin >> ipStr;

				if (IsIpAddr(ipStr)) 
					cout << "YES";
				
				else 
					cout << "NO";
	
			}
			break;
	}
	system("pause");
	return 0;
}

bool CheckIpNumber(const string& num)
{
	const char ZERO = '0';
	int n = 0;

	if (!num.size()) 
	{
		return false;
	}

	for (string::const_iterator it = num.cbegin(); it != num.cend(); ++it) 
	{
		if (!isdigit(*it)) 
		{
			return false;
		}

		// if something like 01 or 001 was passed
		if (it == num.cbegin() && *it == ZERO && it + 1 != num.cend()) 
		{
			return false;
		}

		n *= 10;
		n += *it - ZERO;
	}

	bool in_limit = n >= 0 && n <= 255;

	return in_limit;
}

bool IsIpAddr(const string& ip) 
{
	int position = 0;
	int prevPosition = 0;
	int counter = 0;

	
	while ((position = ip.find('.', prevPosition)) != string::npos) 
	{
		string s = ip.substr(prevPosition, position - prevPosition);

		++counter;

		if (!CheckIpNumber(s)) 
		{
			return false;
		}

		prevPosition = position + 1;
	}

	
	string s = ip.substr(prevPosition, ip.size() - prevPosition);

	if (!CheckIpNumber(s)) 
	{
		return false;
	}

	return (counter == 3) ? true : false;
}
