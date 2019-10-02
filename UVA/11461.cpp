#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b;
	while (cin >> a >> b && a&&b)
	{
		int sw = 0;
		double sq;
		for (int i = a; i <= b; i++)
		{
			sq = sqrt(i);
			double s = sq - (int)sq;
			if (!s)
				sw++;
		}
		cout << sw << endl;
	}
}