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
using namespace std;
int main()
{
	int tc, t = 1;
	cin >> tc;
	while (tc--)
	{
		cout << "Case " << t++ << ": ";
		int t1, t2, f, at, c[3];
		cin >> t1 >> t2 >> f >> at >> c[0] >> c[1] >> c[2];
		sort(c, c + 3);
		int sum = t1 + t2 + f + at + ((c[1] + c[2]) / 2);
		if (sum >= 90)
			cout << "A" << endl;
		else if (sum >= 80)
			cout << "B" << endl;
		else if(sum>=70)
			cout << "C" << endl;
		else if (sum >= 60)
			cout << "D" << endl;
		else
			cout << "F" << endl;
	}
}