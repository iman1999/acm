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
using namespace std;
int n, m = 0;
long long int arr[1100];
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		m = 2;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long int sum = arr[0];
		if (n == 1)
			cout << "1\n";
		else
		{
			for (int i = 1; i < n - 1; i++)
				if (arr[i + 1] > sum + arr[i])
				{
					m++;
					sum += arr[i];
				}
				cout << m << endl;
		}
	}
}