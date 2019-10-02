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
bool visited[101];
void Sieve()
{
	memset(visited, true, sizeof(visited));
	for (int i = 2; i*i <= 100; i++)
	{
		if (visited[i])
		{
			for (int j = i * i; j <= 100; j += i)
			{
				visited[j] = false;
			}
		}
	}

}
int main() 
{
	Sieve();
	int j = 0;
	int p[100], mx = 1;
	vector<int>v[101];
	v[2].push_back(1);
	for (int i = 2; i <= 100; i++)
		if (visited[i])
			p[j++] = i;
	for (int i = 3; i <= 100; i++)
	{
		int k = 0, n = i;
		v[i] = v[i - 1];
		if (visited[i])
			v[i].push_back(1), mx++;
		else
			while (n != 1)
				if (n%p[k] == 0)
					v[i][k]++, n /= p[k];
				else
					k++;
	}
	int n;
	while (cin >> n&&n)
	{
		printf("%3d! =", n);
		for (int i = 0; i < v[n].size(); i++)
		{
			if (i == 15)
				printf("\n      ");
			printf("%3d", v[n][i]);
		}
		printf("\n");
	}
		
	
}