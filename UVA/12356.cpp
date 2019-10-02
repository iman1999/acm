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
int L[100100],R[100100];
int main()
{
	int s, b;
	while (cin >> s >> b && (s || b))
	{
		for (int i = 1; i <= s; i++)
		{
			L[i] = i - 1;
			R[i] = i + 1;
		}
		L[1] = -1;
		R[s] = -1;
		int x, y;
		int i;
		for ( i = 0; i < b; i++)
		{
			cin >> x >> y;
			L[R[y]] = L[x];
			if (L[x] == -1)
				cout << "*";
			else
				cout << L[x];
			R[L[x]] = R[y];
			if (R[y] == -1)
				cout << " *\n";
			else
				cout << " " << R[y] << endl;
		}
		cout << "-\n";
	}
	
}
