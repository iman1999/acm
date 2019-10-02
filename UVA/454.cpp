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
		string s[101],b[101];
		int i = 0;
		while(s[i]=="")
		getline(cin, s[i]);
		if (s[i] != "")
			b[i] = s[i], i++;
		while (getline(cin, s[i]) && s[i] != "")
			b[i] = s[i], i++;
		sort(s, s + i);
		sort(b, b + i);
		for (int j = 0; j < i + 1; j++)
			sort(b[j].begin(), b[j].end());
		for (int j = 0; j < i; j++)
				b[j].erase(std::remove(b[j].begin(), b[j].end(), ' '), b[j].end());
		for (int j = 0; j < i; j++)
			for (int k = j + 1; k < i + 1; k++)
				if (b[j] == b[k])
					cout << s[j] << " = " << s[k] << endl;
		if (tc)
			cout << endl;
	}
}