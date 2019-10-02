#include<iostream>
using namespace std;
int main()
{
	long long int n;
	while (cin >> n && n >= 0)
	{
		int a[9999], i = 0;
		if (n == 0)
			cout << "0";
		else
		{
			while (n)
			{
				int w = n % 3;
				n /= 3;
				a[i++] = w;
			}
			for (int j = i - 1; j >= 0; j--)
				cout << a[j];
		}
		cout << endl;
	}
}