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
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int WA[110][10] = {}, S[110] = {}, T[110] = {}, P[110], coun = 0;
		bool Check[110][10] = { false };
		string s;
		bool c = false;
		while (getline(cin, s))
		{
			if (s == ""&&c)
				break;
			else if(s!="")
			{
				string h;
				int j, t, q, cnt = 0;
				for (int i = 0; i < s.size(); i++)
					if (s[i] == ' ')
					{
						if (cnt == 0)
							j = stoi(h);
						else if (cnt == 1)
							q = stoi(h);
						else if (cnt == 2)
							t = stoi(h);
						h = "";
						cnt++;
					}
					else
						h += s[i];
				if (h == "I")
				{
					bool c = true;
					for (int i = 0; i < coun; i++)
						if (P[i] == j)
							c = false;
					if (c)
						P[coun++] = j;
					WA[j][q]++;
				}
				else if (h == "C")
				{
					bool c = true;
					for (int i = 0; i < coun; i++)
						if (P[i] == j)
							c = false;
					if (c)
						P[coun++] = j;
					if (!Check[j][q])
					{
						S[j]++;
						T[j] += t + WA[j][q] * 20;
						Check[j][q] = true;
					}
				}
				else
				{
					bool c = true;
					for (int i = 0; i < coun; i++)
						if (P[i] == j)
							c = false;
					if (c)
						P[coun++] = j;
				}
				c = true;
			}
		}
		sort(P, P + coun);
		for (int i = 0; i < coun; i++)
		{
			int mx = -1, im = 0;
			for(int j=0;j<coun;j++)
				if (P[j])
				{
					if(mx==-1)
						mx = S[P[j]],im = j;
					else if (S[P[j]] > mx)
					{
						mx = S[P[j]];
						im = j;
					}
					else if (S[P[j]] == mx && T[P[j]] < T[P[im]])
						mx = S[P[j]], im = j;
				}
			cout << P[im] << " " << S[P[im]] << " " << T[P[im]] << endl;
			P[im] = 0;
		}
		if (tc)
			cout << endl;
	}
}
