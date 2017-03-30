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
				// �� ������� ������ ����� N ������������ ��� �������� ����������� �����,
				// �� ������������� N, � ������� �����������.
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
				// ���� ����� �����, �� ������� 2. �������� ��� ���������� ����������� ��������, �������� �� 1.
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
				// �� ������� ����� N ������������ ��� ����� ������� ������, �� ������������� 
				// N, � ������� �����������.

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
				// ���� ����������� ����� N. �������� ����� YES, ���� ����� 
				// N �������� ������ �������� ������, ��� ����� NO � ��������� ������.

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
				// ��������� �������� �� ���� ������������������ ����� ��������������� �����, 
				// ������ ����� �������� � ��������� ������. ������������������ ����������� ������ 0, 
				// ��� ���������� �������� ��������� ������ ��������� ���� ������ � ������� ���������� 
				// ������ ������������������ (�� ������ ������������ ����� 0).
				// �����, ��������� �� ������ 0, ��������� �� �����.
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
				// ���������� ����� ���� ��������� ������������������, ������������� ������ 0.
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
				// ������������������ ������� �� ����������� ����� � ����������� ������ 0. 
				// ���������� �������� ����������� �������� ������������������.
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
				// ������������������ ������� �� ����������� ����� � ����������� ������ 0. 
				// ����������, ����� ���������� ��������� ���� ������������������, ����� �� ����������� ��������.
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
				// ������������������ ������� �� ����������� ����� � ����������� ������ 0. 
				// ���������� �������� ������� �� �������� �������� � ���� ������������������, 
				// �� ���� ��������, ������� ����� ����������, ���� �� ������������������ ������� ���������� �������.

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
				// ������������������ ��������� ������������ ���:
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
				// ���� ����������� ����� A. ����������, ����� �� ����� ������ ��������� ��� ��������, 
				// �� ���� �������� ����� ����� N, ��� F(N) = A. ���� � �� �������� ������ ���������,
				// �������� ����� -1.
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
				// ���� ������������������ ����������� �����, ������������� ������ 0.
				// ����������, ����� ���������� ����� ������ ������ ��������� ���� 
				// ������������������ ����� ���� �����.
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
				// ���� ������������������ ����������� �����, ������������� ������ 0.
				// ���������� ���������� ������� ��������� ���������� � ���� ������������������.
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
				// ���������� ���������� ���������� ����� ����� ���������� ����������� ������������������ 
				// ����������� �����, ������������� ������ 0. ���� � ������������������ ��� ���� ��������� 
				// ����������, �������� ����� 0.
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