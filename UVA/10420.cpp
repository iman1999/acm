#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	string str;
	int n;
	map<string, int> a;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> str;
		a[str]++;
		getline(cin, str);
	}
	for (map<string, int>::iterator i = a.begin(); i != a.end(); i++)
		cout << i->first << " " << i->second << endl;
}