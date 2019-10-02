#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
bool visited[10000001];
void Sieve()
{
	memset(visited, true, sizeof(visited));
	for (int i = 2; i*i <= 10000000; i++)
	{
		if (visited[i])
		{
			for (int j = i * i; j <= 10000000; j += i)
			{
				visited[j] = false;
			}
		}
	}

}
int main()
{
	Sieve();
	vector <int> sieve;
	for (int i = 2; i < sizeof(visited); i++)
		if (visited[i])
			sieve.push_back(i);
	int n;
	while (cin >> n && n)
	{
		int copy = n;
		int j = 0;
		int sum = 0;
		while (n!=1)
		{
			bool c = false;
			int i = sieve[j];
			while (n%i == 0)
			{
				c = true;
				n /= i;
			}
			if (c)
				sum++;
			j++;
		}
		cout <<copy<<" : "<< sum << endl;
	}
}
