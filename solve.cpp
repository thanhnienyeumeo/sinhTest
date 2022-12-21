#include <bits/stdc++.h>
using namespace std;
int f[10005];
void prepare(){
	for ( int i = 1; i<=10000; i++){
		f[i] = i;
		for ( int j = 1; j<=sqrt(i); j++){
				f[i] = min(f[i] , f[i-j*j]+1);
		}
	}
}
void solve()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
}
int main(){
	int t;
	cin >> t;
	prepare();
	while(t--){
		solve();
	}
}
