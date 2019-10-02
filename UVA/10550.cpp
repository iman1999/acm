#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d && a||b||c||d)
	{
		int sum = 1080, v = 9;
		if (b > a)
		{
			int k = 40 - b;
			k += a;
			sum += k * v;
		}
		else
			sum += (a - b)*v;
		if (b > c)
		{
			int k = 40 - b;
			k += c;
			sum += k * v;
		}
		else
			sum += (c - b)*v;
		if (d > c)
		{
			int k = 40 - d;
			k += c;
			sum += k * v;
		}
		else
			sum += (c - d)*v;
		cout << sum << endl;
	}
	system("pause>A");
	return 0;
}