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
#include<cmath>
#include <cstring>
#include<bitset>
#include<queue>
#include<list>
#include<sstream>
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
#include<set>
#define ll long long int 
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvi vector<vi>
using namespace std;
int n, m,a[110][110];
void DFS(int i, int j)
{
	if (i == m && j == n)
	{
		if (a[i - 1][j - 1] == 1)
		{
			a[i - 1][j - 1] = -1;
			DFS(i - 1, j - 1);
		}
		if (a[i - 1][j] == 1)
		{
			a[i - 1][j] = -1;
			DFS(i - 1, j);
		}
		if (a[i][j - 1] == 1)
		{
			a[i][j - 1] = -1;
			DFS(i, j - 1);
		}
	}
	if (i == m&&j==0)
	{
		if (a[i - 1][j] == 1)
		{
			a[i-1][j] = -1;
			DFS(i-1, j);
		}
		if (a[i - 1][j + 1] == 1)
		{
			a[i - 1][j + 1] = -1;
			DFS(i - 1, j + 1);
		}
		if (a[i][j + 1] == 1)
		{
			a[i][j + 1] = -1;
			DFS(i, j + 1);
		}
	}
	else if (i == m)
	{
		if (a[i - 1][j - 1] == 1)
		{
			a[i - 1][j - 1] = -1;
			DFS(i - 1, j - 1);
		}
		if (a[i - 1][j] == 1)
		{
			a[i - 1][j] = -1;
			DFS(i - 1, j);
		}
		if (a[i - 1][j + 1] == 1)
		{
			a[i - 1][j + 1] = -1;
			DFS(i - 1, j + 1);
		}
		if (a[i][j - 1] == 1)
		{
			a[i][j - 1] = -1;
			DFS(i, j - 1);
		}
		if (a[i][j + 1] == 1)
		{
			a[i][j + 1] = -1;
			DFS(i, j + 1);
		}
	}
	else if (j == n&&i==0)
	{
		if (a[i][j - 1] == 1)
		{
			a[i][j - 1] = -1;
			DFS(i, j - 1);
		}
		if (a[i + 1][j - 1] == 1)
		{
			a[i + 1][j - 1] = -1;
			DFS(i + 1, j - 1);
		}
		if (a[i + 1][j] == 1)
		{
			a[i + 1][j] = -1;
			DFS(i + 1, j);
		}
	}
	else if (j == n)
	{
		if (a[i - 1][j - 1] == 1)
		{
			a[i - 1][j - 1] = -1;
			DFS(i - 1, j - 1);
		}
		if (a[i - 1][j] == 1)
		{
			a[i - 1][j] = -1;
			DFS(i - 1, j);
		}
		if (a[i][j - 1] == 1)
		{
			a[i][j - 1] = -1;
			DFS(i, j - 1);
		}
		if (a[i + 1][j - 1] == 1)
		{
			a[i + 1][j - 1] = -1;
			DFS(i + 1, j - 1);
		}
		if (a[i + 1][j] == 1)
		{
			a[i + 1][j] = -1;
			DFS(i + 1, j);
		}
	}
	else
	{
		if (a[i - 1][j - 1] == 1)
		{
			a[i - 1][j - 1] = -1;
			DFS(i - 1, j - 1);
		}
		if (a[i - 1][j] == 1)
		{
			a[i - 1][j] = -1;
			DFS(i - 1, j);
		}
		if (a[i - 1][j + 1] == 1)
		{
			a[i - 1][j + 1] = -1;
			DFS(i - 1, j + 1);
		}
		if (a[i][j - 1] == 1)
		{
			a[i][j - 1] = -1;
			DFS(i, j - 1);
		}
		if (a[i][j + 1] == 1)
		{
			a[i][j + 1] = -1;
			DFS(i, j + 1);
		}
		if (a[i + 1][j - 1] == 1)
		{
			a[i + 1][j - 1] = -1;
			DFS(i + 1, j - 1);
		}
		if (a[i + 1][j] == 1)
		{
			a[i + 1][j] = -1;
			DFS(i + 1, j);
		}
		if (a[i + 1][j + 1] == 1)
		{
			a[i + 1][j + 1] = -1;
			DFS(i + 1, j + 1);
		}
	}
}
int main()
{
	while (cin >> m >> n && n || m)
	{
		for(int i=0;i<m;i++)
			for (int j = 0; j < n; j++)
			{
				char c;
				cin >> c;
				if (c == '*')
					a[i][j] = 0;
				else
					a[i][j] = 1;
			}
		int cnt = 0;
		for (int i = 0; i<m; i++)
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == 1)
				{
					a[i][j] = -1;
					DFS(i, j);
					cnt++;
				}
			}
		cout << cnt << endl;
	}
}