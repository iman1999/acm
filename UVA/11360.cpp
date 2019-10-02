#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
#include<map>
using namespace std;
vector<vector<char>> T(vector<vector<char>>matrix,int n)
{
	vector<vector<char>> res;
	res.assign(n, vector<char>(n, '0'));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			res[i][j] = matrix[j][i];
	return res;
}
int main()
{
	int tc, k = 1;
	cin >> tc;
	while (tc--)
	{
		vector<vector<char>>matrix;
		int n;
		cin >> n;
		matrix.assign(n, vector<char>(n, '0'));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> matrix[i][j];
		int m;
		cin >> m;
		string s;
		for (int i = 0; i < m; i++)
		{
			cin >> s;
			if (s == "row")
			{
				int a, b;
				cin >> a >> b;
				swap(matrix[a - 1], matrix[b - 1]);

			}
			else if (s == "col")
			{
				int a, b;
				cin >> a >> b;
				for (int i = 0; i < n; i++)
					swap(matrix[i][a - 1], matrix[i][b - 1]);
			}
			else if (s == "transpose")
				matrix = T(matrix, n);
			else if (s == "inc")
			{
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++)
						if (matrix[i][j] == '9')
							matrix[i][j] = '0';
						else
							matrix[i][j]++;
			}
			else if (s == "dec")
			{
				for (int i = 0; i < n; i++)
					for (int j = 0; j < n; j++)
						if (matrix[i][j] == '0')
							matrix[i][j] = '9';
						else
							matrix[i][j]--;
			}
		}
		cout << "Case #" << k++ << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << matrix[i][j];
			cout << endl;
		}
			cout << endl;
	}
}
