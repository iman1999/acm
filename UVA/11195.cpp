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
#include <cstring>
#include<bitset>
using namespace std;
int n, ans;
char board[15][15];
bitset<30> rw, ld, rd;
void backtrack(int c) {
	if (c == n) { ans++; return; } // a solution
	for (int r = 0; r < n; r++) // try all possible row
		if (board[r][c] != '*' && !rw[r] && !ld[r - c + n - 1] && !rd[r + c]) {
			rw[r] = ld[r - c + n - 1] = rd[r + c] = true; // flag off
			backtrack(c + 1);
			rw[r] = ld[r - c + n - 1] = rd[r + c] = false; // restore
		}
}
int main() {
	int k = 1;
	while (cin>>n&&n) {
		ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> board[i][j];
		backtrack(0);
		cout << "Case " << k++ << ": " << ans << endl;
	}
}
