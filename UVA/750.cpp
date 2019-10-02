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
using namespace std;
int row[8], TC, a, b, lineCounter; 
bool place(int r, int c) {
	for (int prev = 0; prev < c; prev++) 
		if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c)))
			return false; 
	return true;
}
void backtrack(int c) {
	if (c == 8 && row[b] == a) { 
		if(lineCounter<9)
		printf(" %d      %d", ++lineCounter, row[0] + 1);
		else
			printf("%d      %d", ++lineCounter, row[0] + 1);
		for (int j = 1; j < 8; j++) printf(" %d", row[j] + 1);
		printf("\n");
	}
	for (int r = 0; r < 8; r++) 
		if (place(r, c)) { 
			row[c] = r; backtrack(c + 1);
		}
}
int main() {
	cin >> TC;
	while (TC--) {
		cin >> a >> b; 
		a--; b--;
		memset(row, 0, sizeof row); lineCounter = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0); 
		if (TC) printf("\n");
	}
}
