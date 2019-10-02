#include<iostream>
using namespace std;
int main()
{
	int n, a, b;
	while (cin >> n && n)
	{
		a = 0;
		b = 0;
		int c = 0, o = 1;
		while (n)
		{
			if (n & 1)
			{
				if (c % 2 == 0)
					a += o;
				else
					b += o;
				c++;
			}
			o *= 2;
			n /= 2;
		}
		cout << a << " " << b << endl;
	}
}