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
					��� ������ ����� �����, ������� ����� ��������� �� 100000 �����. ����������, ������� � ��� ����������� ��������� �����.
					������� ������
					�������� ����� N - ���������� ��������� ������, � ����� N �����.
					�������� ������
					�������� ����� �� ������.

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
					�� ������� ������ �������� ������������������ ����� ����� ������. 
					��� ������� ����� �������� ����� YES (� ��������� ������), 
					���� ��� ����� ����� ����������� � ������������������ ��� NO, ���� �� �����������.
					������� ������
					�������� ����� N - ���������� ��������� ������, � ����� N �����.
					�������� ������
					�������� ����� �� ������.
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
					���� ��� ������ �����, ������� ����� ��������� �� 100000 ����� ������. 
					����������, ������� ����� ���������� ������������ ��� � ������ ������, ��� � �� ������.
					������� ������
					�������� ����� N - ���������� ��������� ������� ������, � ����� N ����� ������� ������. 
					����� �������� ����� M - ���������� ��������� ������� ������, � ����� M ����� ������� ������.
					�������� ������
					�������� ����� �� ������.
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
					���� ��� ������ �����, ������� ����� ��������� �� 100000 ����� ������. 
					�������� ��� �����, ������� ������ ��� � ������, ��� � �� ������ ������ � ������� �����������.
					������� ������
					�������� ����� N - ���������� ��������� ������� ������, � ����� N ����� ������� ������.
					����� �������� ����� M - ���������� ��������� ������� ������, � ����� M ����� ������� ������.
					�������� ������
					�������� ����� �� ������.
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
					��� ��� �������, ��������� �� ��� ����. ������ ����� �������� ��������� � ������� ��� �����. 
					��� ����� � ������� ��������. ��� ������ ������� ����� ���������� ��� �������.
					������� ������
					��������� �������� �� ���� ���������� ��� ��������� N. ����� ������� N �����, 
					������ ������ �������� ����� ��� �����-��������. ����� ����� ������� ���� �����.
					�������� ������
					��������� ������ ������� ������� � ������� �����.

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
					�������, �������� ������ ����� �� �������, �������� ���� ����� �����-��������� �������. 
					���������� �� � ���� ������� ���� � ������������, � ��� ������ ���� ������� ������. 
					������� ���������� ������� ��� ��� ��� ������.
					� ���������, ��� ������������ �������� ����� ������������ ������ ������ �������:
					����� �����-���������� ��������� ��������-����������. �� ��������� ������� �� ����� ������� 
					������ ������� �� �������.
					��� ��������, ������� ������� �� ����������� ����, � ������� �� ������� ���������� ��������� 
					����-���������. ��� ������� ���������� �����, �������������� ���-���� � �������, 
					���� ���������� ����� ��� ��� �������� (�� ���� ��� ���������� �����, 
					��� ������� ���� ��������� ����������� � ��� ������ ���������), � ������� ��
					� ������ �� ���������� ����� ���������� �����.
					�������� ���� ��������� ������ �� �������� ��������-����������� ������� �� �����-����������.
					
					������� ������
					� ������ ������ ���������� ������������ ����� ����� N � ���������� ���������� ���� � �������. 
					����� ������� N ��������. ������ �������� ���������� � ��������� ������, � ������� �������� ������� ���������� �����, ����� ��������� ��������� ����� (������ ����� 45), ����� ���������� �������� � ��������� �������� ����� ����������� ����� �� ���������. �������� ������������� � ������������������ �������. ������� ���������� ���������� ���� � ������� ����� ������������������.
					��� ����� ������� ������ �� ��������� ��������� ����, ����� ������� ����� �� ����������� 
					15 ��������. ����� ���������� ���� �� ����� �� ��������� 100000.

					�������� ������
					� ������ ������ ��������� ������ ������� ���������� ���� � ��������������� 
					������� ��������-���������� �������. �� ������ ������ �������� ��� �������, � �������� �������� ������ ������� ������. � ���������, ������ ������ ���� ������� ����������������� ������������ ���������� �����, ����� � ������� � ���� ������� � �.�. ������ �������� ���������� ����� ������ ���� ����� ������������� �����������������.
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