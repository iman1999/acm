#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int T;
	cin >> T;
	string word;
	while (T--)
	{
		cin >> word;
		sort(word.begin(), word.end());
		do
		{
			cout << word << '\n';
		} while (next_permutation(word.begin(), word.end()));
		cout << '\n';
	}
}