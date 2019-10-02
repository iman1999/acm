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
using namespace std;
int b, s, s_c,b_c;
int be[11000], se[11000];
bool chb[11000], chs[11000];
bool Check(int i,int j,int k)
{
	if (abs(be[i] - se[j]) > abs(be[i] - se[k]))
		return true;
	return false;
}
bool GetMarried(int i)
{
	bool ch = false;
	int ans = -1;
	for (int j = s - 1; j >= 0&&s_c; j--)
		if (!chs[j] && !ch)
		{
			ans = j;
			ch = true;
		}
		else if (!chs[j])
		{
			if (Check(i, ans, j))
				ans = j;
			else
				break;
		}
	if (ch)
	{
		chs[ans] = true;
		chb[i] = true;
		s_c--;
		b_c--;
		return true;
	}
	return false;

}
int main()
{
	int tc = 1;
	while (cin >> b >> s && (s || b))
	{
		for (int i = 0; i < b; i++)
		{
			cin >> be[i];
			chb[i] = false;
		}
		for (int i = 0; i < s; i++)
		{
			cin >> se[i];
			chs[i] = false;
		}
		sort(be, be + b);
		sort(se, se + s);
		s_c = s;
		b_c = b;
		for (int i = b - 1; i >= 0; i--)
		{
			if (!GetMarried(i))
				break;
		}
		int i = 0;
		cout << "Case " << tc++ << ": " << b_c;
		if (b_c)
		{
			while (chb[i])
				i++;
			cout << " " << be[i] << endl;
		}
		else
			cout << endl;
	}
}