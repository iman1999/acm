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
	int n, k;
	while (scanf_s("%d %d", &n, &k) && n)
	{
		if (k > n / 2)
			k = n - k;
		long long int s = 1;
		for (int i = 0; i < k; i++)
		{
			s *= (n - i);
			s /= (1 + i);
		}
		printf("%d\n", s);
	}
}
