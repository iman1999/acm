#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int Sum(int j)
{
	int a = j;
	int s=0;
	while (a)
	{
		s += a % 10;
		a /= 10;
	}
	return j + s;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		int sum = 0;
		int c = n / 2;
		for (int i = c; i < n;)
		{
			int k = Sum(i);
			if (k == n)
			{
				sum = i;
				break;
			}
			if (n - k > 150)
				i += 100;
			if (n - k > 100)
				i += 50;
			else if (n - k > 50)
				i += 25;
			else if (n - k > 20)
				i += 10;
			else
				i++;
		}
		cout << sum << endl;
	}
}