#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
int recurse(int length, int count)
{
	if (length == 1)
		return count + 1;

	int newLength=0, oldLength=length;

	for (; length; length /= 10, ++newLength);

	return recurse(newLength, count + 1);
}


int main()
{
	string s;

	while (cin>>s&&s[0]!='E')
	{
		if (s.size() == 1 && s[0] == '1')
			cout << "1" << endl;
		else
			cout << recurse(s.size(), 1) << endl;
	}
}