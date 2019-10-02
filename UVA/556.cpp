#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
bool ch[1001][1001];
int seen[1000][1000];
bool IsWall(int i, int j, int n, int m, char c)
{
	if (i == n || j == m||i==-1||j==-1)
		return true;
	if (ch[i][j])
		return true;
	return false;
}
bool Move(int i, int j, int &x, int &y, int n, int m,char &c)
{
	if(c=='E')
	{
		if (IsWall(i+1, j, n, m, c))
		{
			if (j == m - 1||IsWall(i,j+1,n,m,c))
			{
				c = 'N';
				x = i; y = j;
				return false;
			}
			else
			{
				x = i;
				y = j + 1;
				return true;
			}
		}
		else
		{
			x = i+1;
			y = j;
			c = 'S';
			return true;
		}
	}
	else if(c=='N')
	{
		if (IsWall(i, j+1, n, m, c))
		{
			if (i==0 || IsWall(i-1, j, n, m, c))
			{
				c = 'W';
				x = i; y = j;
				return false;
			}
			else
			{
				x = i-1;
				y = j ;
				return true;
			}
		}
		else
		{
			x = i;
			y = j+1;
			c = 'E';
			return true;
		}
	}
	else if(c=='S')
	{ 
		if (IsWall(i, j - 1, n, m, c))
		{
			if (i == n-1 || IsWall(i + 1, j, n, m, c))
			{
				c = 'E';
				x = i; y = j;
				return false;
			}
			else
			{
				x = i + 1;
				y = j;
				return true;
			}
		}
		else
		{
			x = i;
			y = j-1;
			c = 'W';
			return true;
		}
	}
	else
	{
		if (IsWall(i - 1, j, n, m, c))
		{
			if (j == 0 || IsWall(i, j - 1, n, m, c))
			{
				c = 'S';
				x = i; y = j;
				return false;
			}
			else
			{
				x = i;
				y = j - 1;
				return true;
			}
		}
		else
		{
			x = i-1;
			y = j;
			c = 'N';
			return true;
		}
	}
}
int main()
{
	int n, m;
	while (cin >> n >> m&&(m||n))
	{
		char s;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> s;
				if (s == '1')
					ch[i][j] = true;
				else
					ch[i][j] = false;
				if (ch[i][j])
					seen[i][j] = -1;
				else
					seen[i][j] = 0;
			}
		int xs = n - 1, ys = 0, res[5] = {0};
		char Ch = 'E';
		int li = xs, lj = ys, y, x, i = xs, j = ys;
		bool Mo = false;
		while (true)
		{
			if (i == li && j == lj && Mo)
				break;
			if (Move(i, j, x, y, n, m, Ch))
			{
				Mo = true;
				seen[x][y]++;
				i = x;
				j = y;
			}
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (seen[i][j] != -1 && seen[i][j] < 5)
				{
					res[seen[i][j]]++;
				}
		for (int i = 0; i < 5; i++)
			cout<<setw(3)<<setfill(' ') << res[i];
		cout << endl;
	}
}
