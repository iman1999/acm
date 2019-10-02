#include<iostream>
using namespace std;
int count(int S[], int m, int n)
{
	int table[10000];
	memset(table, 0, sizeof(table));
	table[0] = 1;
	for (int i = 0; i<m; i++)
		for (int j = S[i]; j <= n; j++)
			table[j] += table[j - S[i]];

	return table[n];
}

// Driver Code 
int main()
{
	int arr[5] = { 1, 5, 10,25,50 };
	int m = sizeof(arr) / sizeof(arr[0]);
	int n;
	while (cin>>n)
	cout << count(arr, m, n)<<endl;
	return 0;
}
