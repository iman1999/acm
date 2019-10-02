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
#include<queue>
using namespace std;
int  r, c;
char ch[101][101], nch[101][101];
bool check[101][101];
char help(char a)
{
	if (a == 'R')
		return 'P';
	if (a == 'P')
		return 'S';
	return 'R';
}
bool Change(char a, char b)
{
	if (a == 'R')
	{
		if (b == 'P')
			return true;
	}
	if (a == 'P')
	{
		if (b == 'S')
			return true;
	}
	if (a == 'S')
	{
		if (b == 'R')
			return true;
	}
	return false;
}
void Check( int x, int y)
{
	if (x == 0 )
	{
		if (y == 0)
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else if (y == c - 1)
		{
			if (Change(ch[x][y], ch[x + 1][y]) )
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]) )
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
	}
	else if (x == r - 1)
	{
		if (y == 0)
		{
			if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else if (y == c - 1)
		{
			if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else
		{
			if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
	}
	else if (y == 0)
	{
		if (x == 0)
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else if (x == r - 1)
		{
			if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y + 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
	}
	else if (y == c - 1)
	{
		if (x == 0)
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else if (x == r - 1)
		{
			if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
		else
		{
			if (Change(ch[x][y], ch[x + 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x][y - 1]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else if (Change(ch[x][y], ch[x - 1][y]))
			{
				nch[x][y] = help(ch[x][y]);
				check[x][y] = true;
			}
			else
				nch[x][y] = ch[x][y], check[x][y] = true;
		}
	}
	else
	{
		if (Change(ch[x][y], ch[x + 1][y]))
		{
			nch[x][y] = help(ch[x][y]);
			check[x][y] = true;
		}
		else if (Change(ch[x][y], ch[x][y - 1]))
		{
			nch[x][y] = help(ch[x][y]);
			check[x][y] = true;
		}
		else if (Change(ch[x][y], ch[x - 1][y]))
		{
			nch[x][y] = help(ch[x][y]);
			check[x][y] = true;
		}
		else if (Change(ch[x][y], ch[x][y + 1]))
		{
			nch[x][y] = help(ch[x][y]);
			check[x][y] = true;
		}
		else
			nch[x][y] = ch[x][y], check[x][y] = true;
	}
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> r >> c >> n;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> ch[i][j];
		for (int d = 0; d < n; d++)
		{
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
					check[i][j] = false;
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
					if (!check[i][j])
						Check(i, j);
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
					ch[i][j] = nch[i][j];
		}
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k < c; k++)
				cout << ch[j][k];
			cout << endl;
		}
		if (tc)
			cout << endl;
	}
}
