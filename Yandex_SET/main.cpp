#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

set<int> FillSet(set<int> s, int n);
set<int> InterSection(const set<int> s1, const set<int> s2);
vector<string> GetTranslate();
map<string, vector<string>>& FillMap(map<string, vector<string>>& m, int n);
map<string, vector<string>> EngTtoLat(const map<string, vector<string>>& m);



int main(int argc, char* argv[])
{
	cout << "Enter menu number ->" << endl;
	int menu;
	cin >> menu;

	switch (menu)
	{
			case 1:
			{
				/*
					Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.
					Входные данные
					Вводится число N - количество элементов списка, а затем N чисел.
					Выходные данные
					Выведите ответ на задачу.

					Sample Input:
					5
					1 2 3 2 1
					Sample Output:
					3
				*/
				set<int> st;
				int inVal;

				cin >> inVal;

				while (cin >> inVal) 
				{
					st.insert(inVal);
				}

				cout << st.size();

			}
			break;
			
			case 2:
			{
				/*
					Во входной строке записана последовательность чисел через пробел. 
					Для каждого числа выведите слово YES (в отдельной строке), 
					если это число ранее встречалось в последовательности или NO, если не встречалось.
					Входные данные
					Вводится число N - количество элементов списка, а затем N чисел.
					Выходные данные
					Выведите ответ на задачу.
					Sample Input:
					6
					1 2 3 2 3 4
					Sample Output:
					NO
					NO
					NO
					YES
					YES
					NO
				*/
				multiset<int> s;
				int n;

				cin >> n;

				while (cin >> n) 
				{
					if (s.find(n) == s.end()) 
					{
						cout << "NO" << endl;
					}
					else 
					{
						cout << "YES" << endl;
					}
					s.insert(n);
				}
			}
			break;

			case 3:
			{
				/*
					Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
					Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
					Входные данные
					Вводится число N - количество элементов первого списка, а затем N чисел первого списка. 
					Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
					Выходные данные
					Выведите ответ на задачу.
					Sample Input:
					3
					1 3 2
					3
					4 3 2
					Sample Output:
					2
				*/
				set<int> st1, st2;
				int n;

				cin >> n;
				st1 = FillSet(st1, n);
				cin >> n;
				st2 = FillSet(st2, n);

				set<int> s = InterSection(st1, st2);

				cout << s.size();

			}
			case 4:
			{
				/*
					Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
					Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
					Входные данные
					Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
					Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
					Выходные данные
					Выведите ответ на задачу.
					Sample Input:
					3
					1 3 2
					3
					4 3 2
					Sample Output:
					2 3
				*/

				set<int> st1, st2;
				int inVal;

				cin >> inVal;
				st1 = FillSet(st1, inVal);
				cin >> inVal;
				st2 = FillSet(st2, inVal);

				set<int> newSt = InterSection(st1, st2);

				for (set<int>::const_iterator it = newSt.begin(); it != newSt.end(); ++it)
				{
					cout << *it << ' ';
				}
				// cout << s.size();

			}
			break;

			case 5:
			{
				/*
					Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. 
					Все слова в словаре различны. Для одного данного слова определите его синоним.
					Входные данные
					Программа получает на вход количество пар синонимов N. Далее следует N строк, 
					каждая строка содержит ровно два слова-синонима. После этого следует одно слово.
					Выходные данные
					Программа должна вывести синоним к данному слову.

					Sample Input:
					3
					Hello Hi
					Bye Goodbye
					List Array
					Goodbye
					Sample Output:
					Bye
				*/
				map<string, string> myMap;
				int inVal;
				string word;

				cin >> inVal;

				for (int i = 0; i < inVal; ++i) 
				{
					string firstBuffer, secondBuffer;

					cin >> firstBuffer >> secondBuffer;
					myMap[firstBuffer] = secondBuffer;
					myMap[secondBuffer] = firstBuffer;
				}

				cin >> word;

				cout << myMap[word] << endl;
			}
			break;

			case 6:
			{
				/*
					Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь. 
					Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. 
					Поэтому попавшийся словарь был как раз кстати.
					К сожалению, для полноценного изучения языка недостаточно только одного словаря:
					кроме англо-латинского необходим латинско-английский. За неимением лучшего он решил сделать 
					второй словарь из первого.
					Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько 
					слов-переводов. Для каждого латинского слова, встречающегося где-либо в словаре, 
					Вася предлагает найти все его переводы (то есть все английские слова, 
					для которых наше латинское встречалось в его списке переводов), и считать их
					и только их переводами этого латинского слова.
					Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.
					
					Входные данные
					В первой строке содержится единственное целое число N — количество английских слов в словаре. 
					Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано сначала английское слово, затем отделённый пробелами дефис (символ номер 45), затем разделённые запятыми с пробелами переводы этого английского слова на латинский. Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.
					Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 
					15 символов. Общее количество слов на входе не превышает 100000.

					Выходные данные
					В первой строке программа должна вывести количество слов в соответствующем 
					данному латинско-английском словаре. Со второй строки выведите сам словарь, в точности соблюдая формат входных данных. В частности, первым должен идти перевод лексикографически минимального латинского слова, далее — второго в этом порядке и т.д. Внутри перевода английские слова должны быть также отсортированы лексикографически.
					Sample Input:
					3
					apple - malum, pomum, popula
					fruit - baca, bacca, popum
					punishment - malum, multa
					Sample Output:
					7
					baca - fruit
					bacca - fruit
					malum - apple, punishment
					multa - punishment
					pomum - apple
					popula - apple
					popum - fruit
				*/

				int inVal;
				map<string, vector<string>> engLat;
				map<string, vector<string>> latEng;

				cin >> inVal;
				engLat = FillMap(engLat, inVal);
				latEng = EngTtoLat(engLat);

				cout << latEng.size() << endl;
				for (map<string, vector<string>>::const_iterator it = latEng.begin(); it != latEng.end(); ++it) 
				{
					cout << it->first << " - ";
					for (int i = 0; i < it->second.size(); ++i) 
					{
						cout << it->second[i];
						if (i + 1 < it->second.size()) 
						{
							cout << ", ";
						}
					}
					cout << endl;
				}

			}
	}
	system("pause");
	return 0;
}

set<int> FillSet(set<int> s, int n) 
{
	int num;
	for (; n > 0; n--) 
	{
		cin >> num;
		s.insert(num);
	}

	return s;
}

set<int> InterSection(const set<int> s1, const set<int> s2) 
{
	set<int> newSt;
	set<int>::const_iterator it1 = s1.begin();
	set<int>::const_iterator it2 = s2.begin();

	while (it1 != s1.end() && it2 != s2.end())
	{
		if (*it1 < *it2) 
		{
			++it1;
		}
		else if (*it1 > *it2) 
		{
			++it2;
		}
		else
		{
			newSt.insert(*it1);
			++it1;
			++it2;
		}
	}

	return newSt;
}

vector<string> GetTranslate() 
{
	const char delim = ',';
	vector<string> v;
	string tr;
	int prev_pos = 0, pos = 0;

	getline(cin, tr);
	while ((pos = tr.find(delim, prev_pos)) != string::npos) 
	{
		v.push_back(tr.substr(prev_pos, pos - prev_pos));
		prev_pos = pos + 2;
	}

	v.push_back(tr.substr(prev_pos, tr.size() - prev_pos));

	return v;
}

map<string, vector<string>>& FillMap(map<string, vector<string>>& m, int n) 
{
	string s;
	char delim;

	for (int i = 0; i < n; ++i) 
	{
		cin >> s >> delim;
		cin.get(); 
		m[s] = GetTranslate();
	}

	return m;
}

map<string, vector<string>> EngTtoLat(const map<string, vector<string>>& m) 
{
	map<string, vector<string>> tmp;

	for (map<string, vector<string>>::const_iterator it = m.begin(); it != m.end(); ++it) 
	{
		for (int i = 0; i < it->second.size(); ++i) 
		{
			tmp[it->second[i]].push_back(it->first);
		}
	}

	return tmp;
}