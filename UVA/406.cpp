#include<iostream>
using namespace std;
bool P(int n)
{
	for (int i = 2; i < n / 2; i++)
		if (n%i == 0)
			return false;
	return true;
}
int main()
{
	int a[100] = { 1,2,3,5,7,11,13,17 } , sw = 8;
	for (int i = 19; i < 1001; i++)
		if (P(i) == true)
			a[sw++] = i;
	int n, c;
	while (cin >> n >> c)
	{
		cout << n << " " << c << ":";
		int s = 0;
		while (a[s] < n)
			s++;
		if (s % 2 == 0)
		{
			for (int i = (s / 2) - c, j = 0; j < 2 * c; i++, j++)
				cout << " " << a[i];
		}
		else
			for (int i = (s / 2) - (c / 2), j = 0; j < (2 * c) - 1 || i < s; i++, j++)
				cout << " " << a[i];
		cout << endl;
	}
}