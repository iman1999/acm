#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	
	int A;
	while (cin >> A && A)
	{
		int C, s = 0;
		cin >> C;
		int a[10001];
		for (int i = 0; i < C; i++)
		{
			cin >> a[i];
			if (i == 0)
				s = A - a[0];
			else
			{
				int t = a[i - 1] - a[i];
				if (t > 0)
					s += t;
			}
		}
		cout << s << endl;
	}
}