#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b;
	while (scanf("%lf\n%lf", &a, &b) != EOF)
	{
		double c = pow(b, 1 / a);
		printf("%.0lf\n", c);
	}
}