#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		char a;
		int m, n;
		cin >> a >> m >> n;
		if (a == 'r')
			cout << ((m < n) ? m : n) << endl;
		else if (a == 'k')
			cout << (m*n + 1) / 2 << endl;
		else if (a == 'Q')
			cout << ((m < n) ? m : n) << endl;
		else if (a == 'K')
			cout << ((m + 1) / 2)*((n + 1) / 2) << endl;
	}
}