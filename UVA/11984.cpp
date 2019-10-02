#include<iostream>
using namespace std;
int main()
{
	double c, f;
	int n, sw = 1;
	cin >> n;
	while (n--)
	{
		cin >> c >> f;
		double a = (1.8*c) + 32, b;
		b = a + f;
		b -= 32;
		c = (b / 1.8);
		
			cout.precision(2);
			cout << "Case " << sw << ": " << fixed << c << endl;
		sw++;
	}
}