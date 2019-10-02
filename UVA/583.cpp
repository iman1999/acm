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
using namespace std;
bool visited[47000];
void Sieve()
{
	memset(visited, true, sizeof(visited));
	for (int i = 2; i*i <= 46341; i++)
	{
		if (visited[i])
		{
			for (int j = i * i; j <= 46341; j += i)
			{
				visited[j] = false;
			}
		}
	}

}
int main()
{
	Sieve();
	int n, t = 1;
	while (cin >> n&&n)
	{
		string s;
		s += to_string(n) + " = ";
		if (n < 0)
			s += "-1 x ", n *= -1;
		int cnt = 0;
		int i = 2;
		int N = n;
		while (i < 46341&&n != 1)
		{
			if (visited[i]&&n%i==0)
			{
				n /= i;
				if (cnt == 0)
					s += to_string(i);
				else
					s += " x " + to_string(i);
				cnt++;
			}
			else
				i++;
		}
		if (n != 1)
		{
			if (cnt == 0)
				s += to_string(n);
			else
				s += " x " + to_string(n);
		}
			
		cout << s << endl;
	}
}