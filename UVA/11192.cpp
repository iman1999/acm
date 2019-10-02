#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	while (cin >> n && n)
	{
		string s;
		cin >> s;
		int b = s.size() / n;
		int a = b;
		while (a <= s.size())
		{
			int j = 0;
			for (int i = a - b; i < (a - b) + (b / 2); i++,j++)
				swap(s[i], s[a - j - 1]);
			a += b;
		}
		cout << s << endl;
	}

}