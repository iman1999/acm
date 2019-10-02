#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include <cstdlib> 
#include <cstdio>
#include <cstring>
#include<bitset>
using namespace std;
int n;
int solve(int x, int y,int ch[][5])
{
	int sum = 0, countx = 0, county = 0;
	int check[5][5];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			check[i][j] = ch[i][j];
	for (int i = x; countx < n; i = (i + 1) % n, countx++)
	{
		county = 0;
		for (int j = y; county < n; j = (j + 1) % n, county++)
		{
			if (check[i][j] == 0)
			{
				int k = j;
				while (check[i][k] != -1 && k < n)
					check[i][k++] = 1;
				k = j - 1;
				while (check[i][k] != -1 && k >= 0)
					check[i][k--] = 1;
				k = i + 1;
				while (check[k][j] != -1 && k < n)
					check[k++][j] = 1;
				k = i - 1;
				while (check[k][j] != -1 && k >= 0)
					check[k--][j] = 1;
				sum++;
			}
		}
	}
	return sum;
}
int main()
{
	char board[5][5];
	while (cin >> n && n)
	{
		int check[5][5] = { 0 };
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				cin >> board[i][j];
				if (board[i][j] == 'X')
					check[i][j] = -1;
			}
		int m = 0;
		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++)
			{
				int t = solve(i, j, check);
				if (t > m)
					m = t;
			}
		cout << m << endl;
	}
}