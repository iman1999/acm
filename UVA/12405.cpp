#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int tc, k = 1;
	cin >> tc;
	while (tc--)
	{
		int N;
		cin >> N;
		char s[101];
		int  sum = 0;
		for (int i = 0; i < N; i++)
			cin >> s[i];
		for (int i = 0; i < N; i++)
			if (s[i] == '.')
				s[i] = s[i + 1] = s[i + 2] = '#', sum++;
		cout << "Case " << k++ << ": " << sum << endl;

	}
}