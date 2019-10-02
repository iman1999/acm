#include<iostream>
using namespace std;
int main()
{
	int c[1000];
	long long n;
	while (cin >> n && n)
	{
		int i = 0, j = 0;
		while (n)
		{
			int s = n % 2;
			n /= 2;
			c[i++] = s;
			if (s)
				j++;
		}
		cout << "The parity of ";
		for (int k = i - 1; k >= 0; k--)
			cout << c[k];
		cout << " is " << j << " (mod 2)." << endl;
	}
}