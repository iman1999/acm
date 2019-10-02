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
struct Com
{
	int f, s, t;
};
Com comb[181][1001];
int cs[181];
bool Search(int f, int s, int t,int q)
{
	for (int i = 0; i < cs[q]; i++)
		if (comb[q][i].f == f)
		{
			if (comb[q][i].s == s)
			{
				if (comb[q][i].t == t)
					return false;
			}
			else if (comb[q][i].t == s)
				if (comb[q][i].s == t)
					return false;
		}
		else if (comb[q][i].s == f)
		{
			if (comb[q][i].f == s)
			{
				if (comb[q][i].t == t)
					return false;
			}
			else if (comb[q][i].t == s)
				if (comb[q][i].f == t)
					return false;
		}
		else if (comb[q][i].t == f)
		{
			if (comb[q][i].s == s)
			{
				if (comb[q][i].f == t)
					return false;
			}
			else if (comb[q][i].f == s)
				if (comb[q][i].s == t)
					return false;
		}
	return true;
}
int main()
{
	int n, total = 181, st = 62 , p[999] = {};
	
	int score[62] = { 0 };
	for (int i = 1; i <= 20; i++)
	{
		score[i] = i;
		score[i * 2] = i * 2;
		score[i * 3] = i * 3;
	}
	score[50] = 50;
	for(int i=1;i<st;i++)
		if (!score[i])
		{
			for (int j = i; j < st - 1; j++)
				score[j] = score[j + 1];
			i--;
			st--;
		}
	for(int i=0;i<st;i++)
		for(int j=0;j<st;j++)
			for (int k = 0; k < st; k++)
			{
				int q = score[i] + score[j] + score[k];
				p[q]++;
				if (Search(score[i], score[j], score[k], q))
					comb[q][cs[q]].f = score[i], comb[q][cs[q]].s = score[j], comb[q][cs[q]++].t = score[k];

			}
	score[61] = 50;
	while (cin>>n&&n>0)
	{
		if (cs[n] && n < 181)
		{
			cout << "NUMBER OF COMBINATIONS THAT SCORES " << n << " IS " << cs[n] << "." << endl;
			cout << "NUMBER OF PERMUTATIONS THAT SCORES " << n << " IS " << p[n] << "." << endl;
		}
		else
			cout << "THE SCORE OF " << n << " CANNOT BE MADE WITH THREE DARTS." << endl;
		cout << "**********************************************************************" << endl;

	}
	cout << "END OF OUTPUT" << endl;
}
