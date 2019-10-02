#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include <cstdlib> 
#include <cstdio>
#include<cmath>
#include <cstring>
#include<bitset>
#include<queue>
#include<list>
#include<sstream>
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
using namespace std;
int main()
{
	double m1, m2, m3, s, area;
	while (scanf("%lf %lf %lf", &m1, &m2, &m3) != EOF) {
		s = (m1 + m2 + m3) / 2;
		area = (4.0 / 3.0)*sqrt(s*(s - m1)*(s - m2)*(s - m3));

		if (area>0.0)
			printf("%.3lf\n", area);
		else
			printf("-1.000\n");
	}
	return 0;
}