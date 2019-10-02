#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, nu[10] = { 0 };
		cin >> n;
		string s, s1;
		for (int i = 1; i <= n; i++)
			s1 = to_string(i), s += s1;
		for (int i = 0; i < s.size(); i++)
			nu[s[i] - 48]++;
		for (int i = 0; i < 9; i++)
			cout << nu[i] << " ";
		cout << nu[9] << endl;
	}
}