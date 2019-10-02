#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, d = 0, a, b;
		cin >> n;
		bool c = true;
		cin >> a >> b;
		d = a - b;
		for (int i = 0; i < n-1&&c; i++)
		{
			cin >> a >> b;
			if (d != a - b)
				c = false;
		}
		if (c)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		if (tc)
			cout << endl;
	}
}