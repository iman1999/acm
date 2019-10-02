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
int arr[1100];
int main()
{
	int n;
	while (cin >> n && n)
	{
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i])
				s++;
		}
		if (s)
		{
			int j = 0;
			for (int i = 0; i < n; i++)
				if (arr[i])
				{
					if (j)
						cout << " " << arr[i];
					else
						cout << arr[i];
					j++;
				}
			cout << endl;
		}
		else
			cout << "0\n";
	}
}