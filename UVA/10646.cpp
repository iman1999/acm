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
struct card
{
	char v, s;
};
vector<card>T, B;
card M[52];
int main()
{
	int tc, t = 1;
	cin >> tc;
	while (tc--)
	{
		card a;
		for (int i = 0; i < 27; i++)
		{
			cin >> a.v >> a.s;
			B.push_back(a);
		}
		for (int i = 0; i < 25; i++)
		{
			cin >> a.v >> a.s;
			T.push_back(a);
		}
		int y = 0;
		for (int i = 0; i < 3; i++)
		{
			a = B.back();
			B.pop_back();
			int x;
			if (a.v >= '2'&&a.v <= '9')
				x = a.v - '0';
			else
				x = 10;
			y += x;
			for (int i = 0; i < 10 - x&&!B.empty(); i++)
				B.pop_back();
		}
		bool check = false;
		int i = 0, siize = 0;
		if (!B.empty())
		{
			i = B.size();
			siize = i;
			while (!B.empty())
			{
				M[i - 1] = B.back();
				i--;
				B.pop_back();
			}
		}
		i = siize + T.size();
		siize = i;
		i--;
		while (!T.empty())
		{
			M[i--] = T.back();
			T.pop_back();
		}
		i = 0;
		while (i != y-1)
			i++;
		cout << "Case " << t++ << ": ";
		cout << M[i%siize].v << M[i%siize].s << endl;

	}
}