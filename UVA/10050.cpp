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
int main() {
	int T, N, P, a[100];

	scanf_s("%d", &T);

	while (T--) {
		scanf_s("%d %d", &N, &P);

		for (int i = 0; i<P; ++i) scanf_s("%d", &a[i]);

		int ans = 0;

		for (int i = 1; i <= N; ++i) {
			if (i % 7 == 6 || i % 7 == 0) continue;

			bool found = false;

			for (int j = 0; j<P; ++j)
				if (i%a[j] == 0)
					found = true;

			if (found) ++ans;
		}

		printf("%d\n", ans);
	}

	return 0;
}