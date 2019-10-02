#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	int sw = 1;
	while (cin >> n&&n)
	{
		int x0, y0, x1, y1;
		cin >> x0 >> y0;
		double sum = 0;
		for (int i = 0; i < n - 1; i++)
		{
			cin >> x1 >> y1;
			sum = sqrt(pow((x0 - x1), 2) + pow((y0 - y1), 2));
			x0 = x1;
			y0 = y1;
		}
		if (sw != 1)
			cout << endl;
		cout  << "Scenario #" << sw << endl;
		cout << fixed << setprecision(3) << "Frog Distance = " << sum << endl;
		sw++;
	}
}