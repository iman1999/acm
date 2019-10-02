#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string s,S[51];
		while(s=="")
			getline(cin, s);
		int j = 0, k = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'M')
				j++;
			else if (s[i] == 'F')
				j--;
			if (s[i] != ' '&&s[i + 1] != ' '&&s[i+1]!=0)
				k++;
		}
		if (j == 0&&k>1)
			cout << "LOOP" << endl;
		else
			cout << "NO LOOP" << endl;

	}
}