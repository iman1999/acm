#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a >> b;
		double c = b - a,s=0,e;
		e = c / 2;
		int j = 1;
		while (true)
		{
			if ((s + j) <= e)
				s += j;
			if (s + (j + 1) > e)
				break;
			j++;
		}
		s *= 2;
		if (c - s <= j + 1 && s)
			cout << (j * 2) + 1 << endl << endl;
		else if (s)
			cout << (j + 1) * 2 << endl << endl;
		else
			cout << "0" << endl;
	}
}