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
int Row[100][8],i=0, lineCounter,row[8];
int R[9][9];
bitset<30> rw, ld, rd;
bool place(int r, int c) {
	for (int prev = 0; prev < c; prev++)
		if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
			return false;
	return true;
}
void backtrack(int c) {
	if (c == 8) {
		for (int j = 0; j < 8; j++)
			Row[i][j] = row[j];
		i++;
	}
	for (int r = 0; r < 8; r++)
		if (place(r, c)) {
			row[c] = r;
			backtrack(c + 1);
		}
}
/*void backtrack(int c) {
	if (c == 8) { i++; return; } // a solution
	if (i == 3)
		int s = 0;
	for (int r = 0; r < 8; r++) // try all possible row
		if (!rw[r] && !ld[r - c + 8 - 1] && !rd[r + c])
		{
			rw[r] = ld[r - c + 8 - 1] = rd[r + c] = true;
			row[i][r] = c;
			backtrack(c + 1);
			rw[r] = ld[r - c + 8 - 1] = rd[r + c] = false;
		}
}*/
int main()
{
	backtrack(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		for (int j = 0; j < 8; j++)
			for (int k = 0; k < 8; k++)
				cin >> R[j][k];
		int ans = 0;
		for (int j = 0; j < i; j++)
		{
			int a = 0;
			for (int k = 0; k < 8; k++)
			{
				a += R[k][Row[j][k]];
			}
			if (a > ans)
				ans = a;
		}
		cout << setw(5) << ans << endl;
	}
}