#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int max=-10000000, a=-10000000,b;
		cin >> n;
		while (n--)
		{
			cin >> b;
			if (max - b > a)
				a = max - b;
			if (b > max)
				max = b;
		}
		cout << a << endl;
		
	}
}