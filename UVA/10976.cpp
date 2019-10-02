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
int main()
{
	int n;
	while (cin >> n)
	{
		vector <int> x,y;
		int sum = 0;
		for (int i = n + 1; i <= 2 * n;i++)
		{
				if (!((i*n) % (i - n)))
				{
					sum++;
					x.push_back((i*n)/(i-n));
					y.push_back(i);
				}
		}
		cout << sum << endl;
		for (int i = 0; i < sum; i++)
			cout << "1/" << n << " = 1/" << x[i] << " + 1/" << y[i] << endl;
	}
}

