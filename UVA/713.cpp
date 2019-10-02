#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[400], b[400], c[400];
		int sw = 0;
		cin >> a >> b;
		int i, j;
		for (i = 0; a[i]; i++);
		for (j = 0; b[j]; j++);
		for (int k = 0; k < i / 2; k++)
			swap(a[k], a[i - k - 1]);
		for (int k = 0; k < j / 2; k++)
			swap(b[k], b[j - k - 1]);
		if (i > j)
		{
			int q = i - 1;
			int ca = 0;
			for (int k = j - 1; k >= 0; k--, q--)
			{
				int s = 0;
				s = (a[q] - 48) + (b[k] - 48) + ca;
				if (s > 9)
				{
					s %= 10;
					ca = 1;
				}
				else
					ca = 0;
				c[sw++] = s + 48;
			}
			while (q>=0)
			{
				int s = (a[q]-48) + ca;
				if (s > 9)
				{
					s %= 10;
					ca = 1;
				}
				else
					ca = 0;
				c[sw++] = s + 48;
				q--;
			}
			if (ca)
				c[sw++] = ca+48;
		}
		else
		{
			int q = j - 1;
			int ca = 0;
			for (int k = i - 1; k >= 0; k--, q--)
			{
				int s = 0;
				s = (a[k] - 48) + (b[q] - 48) + ca;
				if (s > 9)
				{
					s %= 10;
					ca = 1;
				}
				else
					ca = 0;
				c[sw++] = s + 48;
			}
			while (q >= 0)
			{
				int s = (b[q]-48) + ca;
				if (s > 9)
				{
					s %= 10;
					ca = 1;
				}
				else
					ca = 0;
				c[sw++] = s + 48;
				q--;
			}
			if (ca)
				c[sw++] = ca + 48;
		}
		bool check = false;
		for (int i = 0; i < sw; i++)
			if ((c[i] - 48) == 0 && check == false)
				continue;
			else
			{
				cout << c[i];
				check = true;
			}
		cout << endl;
	}
}