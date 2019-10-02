#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (cin >> a)
	{
		cout << "The string '" << a << "' contains " << a.size() << " palindromes." << endl;
	}
		
}