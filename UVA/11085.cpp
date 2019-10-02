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
int R[9];
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
int main()
{
	backtrack(0);
	int tc = 1;
	while (cin >> R[0])
	{
		for (int i = 1; i < 8; i++)
			cin >> R[i];
		int ans = 9999;
		for (int j = 0; j < i; j++)
		{
			int s = 0;
			for (int k = 0; k < 8; k++)
				if (R[k]-1 != Row[j][k])
					s++;
			if (s < ans)
				ans = s;
		}
		cout << "Case " << tc++ << ": " << ans << endl;
	}
}