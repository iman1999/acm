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
	vector<int>nu;
	int n,m;
	while (scanf_s("%d%d",&n,&m)==2)
	{
		bool c = true;
		if (n < 2 || m < 2)
			c = false;
		while (n!=1&&c)
		{
			if (n%m)
				c = false;
			nu.push_back(n);
			n /= m;
		}
		nu.push_back(n);
		if (!c)
			printf("Boring!");
		else
			for (int i = 0; i < nu.size(); i++)
			{
				if (i)
					printf(" ");
				printf("%d",nu[i]);
			}
		printf("\n");
		while (!nu.empty())
			nu.pop_back();
	}
}