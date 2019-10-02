#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int l;
	while (cin >> l && l)
	{
		string s;
		while (s == "")
			getline(cin, s);
		int Min = 2000001, k = 0, j = 0;
		bool check = false;
		for (int i = 0; i < s.size()&&!check; i++)
		{
			if (s[i] == 'R')
			{
				if (j == 1)
				{
					if (k < Min)
						Min = k;
					k = 1;
					j = 2;
				}
				else if (j == 2)
					k = 1;
				else 
					k++, j = 2;
			}
			else if (s[i] == 'D')
			{
				if (j == 2)
				{
					if (k < Min)
						Min = k;
					k = 1;
					j = 1;
				}
				else if (j == 1)
					k = 1;
				else
					k++, j = 1;
			}
			else if (s[i] == 'Z')
				check = true;
			else if(j)
				k++;
		}
		if (check)
			cout << "0" << endl;
		else
		{
			cout << Min << endl;
		}
	}
}