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
using namespace std;
using namespace std;


char M[143][143];
bool check(char *s, int sz) {
	for (int i = 0; s[i]; ++i)
		M[i / sz][i%sz] = s[i];

	for (int i = 0; i<sz; ++i)
		for (int j = 0; j<sz; ++j) {
			char ch = M[i][j];
			if (ch != M[j][i] || ch != M[sz - i - 1][sz - j - 1] || ch != M[sz - j - 1][sz - i - 1])
				return 0;
		}
	return 1;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int T;
	cin >> T;
	cin.ignore(100, '\n');

	char str[10143];
	for (int cse = 1; cse <= T; ++cse) {
		cout << "Case #" << cse << ":\n";

		cin.getline(str, 10143);
		int l = 0;
		for (int i = 0; str[i]; ++i)
			if (isalpha(str[i]))
				str[l++] = str[i];
		str[l] = 0;

		int sq = sqrt(l);
		if (sq*sq == l && check(str, sq))
			cout << sq << '\n';
		else
			cout << "No magic :(\n";
	}
}