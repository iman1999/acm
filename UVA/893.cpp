#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d && a&&b&&c&&d)
	{
		while (a>0)
		{
			bool ly = false;
			if (d % 4 == 0)
				if (d % 100 != 0 || d % 400 == 0)
					ly = true;
			if (c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
			{
				int k = 32 - b;
				if (a >= k)
				{
					a -= k;
					b = 1;
					if (c == 12)
					{
						c = 1;
						d++;
					}
					else
					c++;
				}
				else
				{
					b += a;
					a = 0;
				}
				
			}
			else if (c == 11 || c == 9 || c == 6 || c == 4)
			{
				int k = 31 - b;
				if (a >= k)
				{
					a -= k;
					b = 1;
					c++;
				}
				else
				{
					b += a;
					a = 0;
				}
			}
			else
			{
				if (ly == true)
				{
					int k = 30 - b;
					if (a >= k)
					{
						a -= k;
						b = 1;
						c++;
					}
					else
					{
						b += a;
						a = 0;
					}
				}
				else
				{
					int k = 29 - b;
					if (a >= k)
					{
						a -= k;
						b = 1;
						c++;
					}
					else
					{
						b += a;
						a = 0;
					}
				}
			}
		}
		cout << b << " " << c << " " << d << endl;
	}
}