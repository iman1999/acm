#include<iostream>
#include<string>
using namespace std;

int main()
{
	char a[200], b[200], c[200];
	cin.getline(a, 101);
	while (cin.getline(b, 101))
	{
		if (b[0] == '0')
			break;
		int sw = 0;
		int i = 0, j = 0;
		for (; a[i]; i++);
		for (; b[j]; j++);
		int car = 0;
		if (i > j)
		{
			while (j)
			{
				int d = (a[i - 1] - 48) + (b[j - 1] - 48) + car;
				if (d > 9)
				{
					car = 1;
					d %= 10;
				}
				else
					car = 0;
				c[sw] = d + 48;
				i--; j--;
				sw++;
			}
			while (i)
			{
				int d = (a[i - 1] - 48) + car;
				if (d > 9)
				{
					car = 1;
					d %= 10;
				}
				else
					car = 0;
				c[sw] = d + 48;
				i--;
				sw++;
			}
			if (car)
				c[sw++] = '1';
		}
		else
		{
			while (i)
			{
				int d = (a[i - 1] - 48) + (b[j - 1] - 48) + car;
				if (d > 9)
				{
					car = 1;
					d = d % 10;
				}
				else
					car = 0;
				c[sw] = d + 48;
				i--; j--;
				sw++;
			}
			while (j)
			{
				int d = (b[j - 1] - 48) + car;
				if (d > 9)
				{
					car = 1;
					d = d % 10;
				}
				else
					car = 0;
				c[sw] = d + 48;
				j--;
				sw++;
			}
			if (car)
				c[sw++] = '1';
		}
		for (int i = sw - 1; i >= 0; i--)
			a[sw - 1 - i] = c[i];
	}
	cout << a << endl;
}