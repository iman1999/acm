#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int e, f, c, sw = 0;
		cin >> e >> f >> c;
		int a = e + f;
		while (a / c)
		{
			int b = a / c;
			a = a % c;
			a += b;
			sw += b;
		}
		cout << sw << endl;
	}
}