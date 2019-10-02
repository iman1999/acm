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
struct Car
{
	int l, h;
	string n;
}c[10000];
int d;
bool check(long long int n)
{
	int mi = -1, count = 0;
	for(int i=0;i<d;i++)
		if (n >= c[i].l&&n <= c[i].h)
		{
			count++;
			mi = i;
		}
	if (count == 1)
	{
		cout << c[mi].n << endl;
		return true;
	}
	return false;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> d;
		for (int i = 0; i < d; i++)
			cin >> c[i].n >> c[i].l >> c[i].h;
int n;
	cin >> n;
	while (n--)
	{
		long long int M;
		cin >> M;
		if (!check(M))
			cout << "UNDETERMINED" << endl;
	}	
}
	
}

