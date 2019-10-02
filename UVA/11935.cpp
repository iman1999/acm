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
using namespace std;
int main()
{
	string s;
	int cur = 0, last = 0;
	int Fc;
	double Max = 0, Sum = 0;
	int nl = 0, ll = 0;
	while (getline(cin, s))
	{
		string h[4];
		int j = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
				h[j] += s[i];
			else
				j++;
		}
		cur = stoi(h[0]);
		if (cur!=last)
		{
			Sum += (double(cur - last) / 100)*Fc + (double(cur - ll)*nl);
			if (Sum > Max)
				Max = Sum;
			last = cur;
			ll = cur;
		}
		if (j == 1)
		{
			if (h[1] == "Goal")
			{
				cout << setprecision(3) << fixed << Max << endl;
				Max = Sum = cur = Fc = ll = last = nl = 0;
			}
			else if (h[1] == "Leak")
			{
				nl++;
			}
			else
			{
				nl = 0;
			}
		}
		else if (j == 2)
			Sum = 0;
		else
		{
			Fc = stoi(h[3]);
			if (Fc == 0)
				break;
		}
	}
}
