#include<iostream>
using namespace std;
int main()
{
	int a, b, sw = 1;
	while (cin >> a >> b && a != 0 && b != 0)
	{
		if (sw != 1)
			cout << endl;
		char ch[110][110];
		int c[101][101];
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			{
				cin >> ch[i][j];
				if (ch[i][j] == '*')
					c[i][j] = -1;
				else
					c[i][j] = 0;
			}
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
				if (c[i][j] == -1)
				{
					if (i == 0 && j == 0)
					{
						if (c[i + 1][j] != -1)c[i + 1][j]++;
						if (c[i][j + 1] != -1)c[i][j + 1]++;
						if (c[i + 1][j + 1] != -1)c[i + 1][j + 1]++;
					}
					else if (i == a - 1 && j == b - 1)
					{
						if (c[i - 1][j] != -1)c[i - 1][j]++;
						if (c[i][j - 1] != -1)c[i][j - 1]++;
						if (c[i - 1][j - 1] != -1)c[i - 1][j - 1]++;
					}
					else if (i == 0 && j == b - 1)
					{
						if (c[i + 1][j] != -1)c[i + 1][j]++;
						if (c[i][j - 1] != -1)c[i][j - 1]++;
						if (c[i + 1][j - 1] != -1)c[i + 1][j - 1]++;
					}
					else if (i == a-1 && j == 0)
					{
						if (c[i - 1][j] != -1)c[i - 1][j]++;
						if (c[i][j + 1] != -1)c[i][j + 1]++;
						if (c[i - 1][j + 1] != -1)c[i - 1][j + 1]++;
					}
					else if (i == 0)
					{
						if (c[i + 1][j] != -1)c[i + 1][j]++;
						if (c[i][j + 1] != -1)c[i][j + 1]++;
						if (c[i + 1][j + 1] != -1)c[i + 1][j + 1]++;
						if (c[i + 1][j - 1] != -1)c[i + 1][j - 1]++;
						if (c[i][j - 1] != -1)c[i][j - 1]++;
					}
					else if (j == 0)
					{
						if (c[i + 1][j] != -1)c[i + 1][j]++;
						if (c[i][j + 1] != -1)c[i][j + 1]++;
						if (c[i + 1][j + 1] != -1)c[i + 1][j + 1]++;
						if (c[i - 1][j + 1] != -1)c[i - 1][j + 1]++;
						if (c[i - 1][j] != -1)c[i - 1][j]++;
					}
					else 
					{
						if (c[i + 1][j] != -1)c[i + 1][j]++;
						if (c[i][j + 1] != -1)c[i][j + 1]++;
						if (c[i + 1][j + 1] != -1)c[i + 1][j + 1]++;
						if (c[i - 1][j + 1] != -1)c[i - 1][j + 1]++;
						if (c[i - 1][j] != -1)c[i - 1][j]++;
						if (c[i][j - 1] != -1)c[i][j - 1]++;
						if (c[i - 1][j - 1] != -1)c[i - 1][j - 1]++;
						if (c[i + 1][j - 1] != -1)c[i + 1][j - 1]++;
					}
				}
		cout << "Field #" << sw << ":" << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
				if (c[i][j] == -1)
					cout << "*";
				else
					cout << c[i][j];
			cout << endl;
		}
		sw++;
	}
}