#include<iostream>
#include <algorithm>

using namespace std;

int solve(int n, int m){
    if(n > m) swap(n,m);
    if(n == 1) return m;
    if(n == 2) return m / 4 * 4 + (m % 4 == 1? 2 : (m % 4 >= 2? 4 : 0));
    return (n*m + 1) / 2;
}
int main(){
    int N,M,ans;
    
    while(true){
		cin >> N >> M;
        if(N == 0) break;
		cout << solve(N, M) << " knights may be placed on a " << N << " row " << M << " column board." << endl;
    }
    
    return 0;
}
