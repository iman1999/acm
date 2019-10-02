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
using namespace std;
bool Check(long long int h)
{
	bool c[10] = { false };
	while (h)
	{
		if (c[h % 10])
			return false;
		c[h % 10] = true;
		h /= 10;
	}
	return true;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		long long int n;
		cin >> n;
		vector<long long int>a;
		vector<int>b;
		long long int h = n;
		int i = 1;
		while (h < 10000000000)
		{
			if (Check(h)&&Check(i))
			{
				a.push_back(h);
				b.push_back(i);
			}
			i++;
			h = n * i;
		}
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << " / " << b[i] << " = " << n << endl;
		if (tc)
			cout << endl;
	}
}

