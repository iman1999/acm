#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int A, B, C;
		cin >> A >> B >> C;
		bool sol = false; int x, y, z;
		for (x = -100; x <= 100; x++)
			for (y = -100; y <= 100; y++)
				for (z = -100; z <= 100; z++)
					if (y != x && z != x && z != y && x + y + z == A && x * y * z == B && x * x + y * y + z * z == C) {
						if (!sol) printf("%d %d %d\n", x, y, z);
						sol = true;
					}
		if (!sol)
			cout << "No solution." << endl;
	}
}
