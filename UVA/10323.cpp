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
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
using namespace std;
int main()
{
	long long int ff[6] = { 40320,362880,3628800,39916800,479001600,6227020800 };
	int u = 7, o = 14;
	int n;
	while (scanf_s("%d",&n)==1)
	{
		if (n < 0)
		{
			if (n % 2 == 0)
				printf("Underflow!\n");
			else
				printf("Overflow!\n");
		}
		else
		{
			if (n <= u)
				printf("Underflow!\n");
			else if (n >= o)
				printf("Overflow!\n");
			else
				cout << ff[n - u - 1] << endl;
		}
	}
}