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
using namespace std;
char c[10][10];
bool board[9][9];
void Process(string h, int cnt)
{
	int k = 0;
	for (int j = 0; j < h.size(); j++)
		if (h[j] >= '1'&&h[j] <= '9')
		{
			for (int ii = 0; ii < h[j]-48 ; ii++)
				c[cnt][k++] = '.';
		}
		else
			c[cnt][k++] = h[j];
}
void check(char s,int i,int j)
{
	if (s == 'p')
	{
		if (j - 1 >= 0 && i + 1 < 8 && c[i + 1][j - 1] == '.')
			board[i + 1][j - 1] = true;
		if (i + 1 < 8 && j + 1 < 8 && c[i + 1][j + 1] == '.')
			board[i + 1][j + 1] = true;
	}
	else if (s == 'P')
	{
		if (i - 1 >= 0 && j - 1 >= 0 && c[i - 1][j - 1] == '.')
			board[i - 1][j - 1] = true;
		if (i - 1 >= 0 && j + 1 < 8 && c[i - 1][j + 1] == '.')
			board[i - 1][j + 1] = true;
	}
	else if (s == 'r' || s == 'R')
	{
		for (int k = i + 1; k < 8; k++)
			if (c[k][j] == '.')
				board[k][j] = true;
			else
				break;
		for (int k = i - 1; k >= 0; k--)
			if (c[k][j] == '.')
				board[k][j] = true;
			else
				break;
		for (int k = j + 1; k < 8; k++)
			if (c[i][k] == '.')
				board[i][k] = true;
			else
				break;
		for (int k = j - 1; k >= 0; k--)
			if (c[i][k] == '.')
				board[i][k] = true;
			else
				break;
	}
	else if (s == 'b' || s == 'B')
	{
		for (int k = i + 1, kk = j + 1; k < 8 && kk < 8; k++, kk++)
			if (c[k][kk] == '.')
				board[k][kk] = true;
			else
				break;
		for (int k = i - 1, kk = j + 1; k >= 0, kk < 8; k--, kk++)
			if (c[k][kk] == '.')
				board[k][kk] = true;
			else
				break;
		for (int k = j - 1, kk = i - 1; k >= 0, kk >= 0; k--, kk--)
			if (c[kk][k] == '.')
				board[kk][k] = true;
			else
				break;
		for (int k = j - 1, kk = i + 1; k >= 0, kk < 8; k--, kk++)
			if (c[kk][k] == '.')
				board[kk][k] = true;
			else
				break;
	}
	else if (s == 'k' || s == 'K')
	{
		if (i - 1 >= 0 && j - 1 >= 0 && c[i - 1][j - 1] == '.')
			board[i - 1][j - 1] = true;
		if (i - 1 >= 0 && j + 1 < 8 && c[i - 1][j + 1] == '.')
			board[i - 1][j + 1] = true;
		if (j - 1 >= 0 && i + 1 < 8 && c[i + 1][j - 1] == '.')
			board[i + 1][j - 1] = true;
		if (i + 1 < 8 && j + 1 < 8 && c[i + 1][j + 1] == '.')
			board[i + 1][j + 1] = true;
		if (i - 1 >= 0 && c[i - 1][j] == '.')
			board[i - 1][j] = true;
		if (i + 1 < 8 && c[i + 1][j] == '.')
			board[i + 1][j] = true;
		if (j - 1 >= 0 && c[i][j - 1] == '.')
			board[i][j - 1] = true;
		if (j + 1 < 8 && c[i][j + 1] == '.')
			board[i][j + 1] = true;
	}
	else if (s == 'q' || s == 'Q')
	{
		for (int k = i + 1, kk = j + 1; k < 8 && kk < 8; k++, kk++)
			if (c[k][kk] == '.')
				board[k][kk] = true;
			else
				break;
		for (int k = i - 1, kk = j + 1; k >= 0, kk < 8; k--, kk++)
			if (c[k][kk] == '.')
				board[k][kk] = true;
			else
				break;
		for (int k = j - 1, kk = i - 1; k >= 0, kk >= 0; k--, kk--)
			if (c[kk][k] == '.')
				board[kk][k] = true;
			else
				break;
		for (int k = j - 1, kk = i + 1; k >= 0, kk < 8; k--, kk++)
			if (c[kk][k] == '.')
				board[kk][k] = true;
			else
				break;
		for (int k = i + 1; k < 8; k++)
			if (c[k][j] == '.')
				board[k][j] = true;
			else
				break;
		for (int k = i - 1; k >= 0; k--)
			if (c[k][j] == '.')
				board[k][j] = true;
			else
				break;
		for (int k = j + 1; k < 8; k++)
			if (c[i][k] == '.')
				board[i][k] = true;
			else
				break;
		for (int k = j - 1; k >= 0; k--)
			if (c[i][k] == '.')
				board[i][k] = true;
			else
				break;
	}
	else if (s == 'n' || s == 'N')
	{
		if (i - 2 >= 0 && j - 1 >= 0&&c[i-2][j-1]=='.')
			board[i - 2][j - 1] = true;
		if (i - 2 >= 0 && j + 1 < 8 && c[i - 2][j + 1] == '.')
			board[i - 2][j + 1] = true;
		if (j - 1 >= 0 && i + 2 < 8 && c[i + 2][j - 1] == '.')
			board[i + 2][j - 1] = true;
		if (i + 2 < 8 && j + 1 < 8 && c[i + 2][j + 1] == '.')
			board[i + 2][j + 1] = true;
		if (i - 1 >= 0 && j - 2 >= 0 && c[i - 1][j - 2] == '.')
			board[i - 1][j - 2] = true;
		if (i - 1 >= 0 && j + 2 < 8 && c[i - 1][j + 2] == '.')
			board[i - 1][j + 2] = true;
		if (j - 2 >= 0 && i + 1 < 8 && c[i + 1][j - 2] == '.')
			board[i + 1][j - 2] = true;
		if (i + 1 < 8 && j + 2 < 8 && c[i + 1][j + 2] == '.')
			board[i + 1][j + 2] = true;
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s;
	while (getline(cin, s))
	{
		memset(board, false, sizeof(board));
		string h;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
			if (s[i] == '/')
			{
				Process(h, cnt);
				cnt++;
				h = "";
			}
			else
				h += s[i];
		if (h != "")
			Process(h, cnt++);
		for(int i=0;i<cnt;i++)
			for (int j = 0; j < cnt; j++)
			{
				if (c[i][j] != '.')
				{
					board[i][j] = true;
					check(c[i][j], i, j);
				}
			}
		int m = 0;
		for (int i = 0; i < cnt; i++)
			for (int j = 0; j < cnt; j++)
				if (!board[i][j])
					m++;
		cout << m << endl;
	}
}
