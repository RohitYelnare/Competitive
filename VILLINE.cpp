#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//bool isAbove(ll a, ll b, ll m, ll c) {
//     
//     if(b>c && a<=(b-c)/m) {
//          return true;
//     }
//
//     return false;
//}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll n, m, c;
	cin >> n >> m >> c;
	
	ll x,y,p,power_above=0, power_below=0, isAbove;
	
	for(int i=0; i<n; i++) {
	     cin >> x >> y >> p;
	
//	     if(isAbove(x, y, m, c)==true) {
//	          power_above += p;
//	     }
//	     else
//	          power_below += p;
		isAbove = y-m*x-c;
        if(isAbove > 0){
            power_above += p;
        }
        else{
            power_below += p;
        }
	}
	
	cout << max(power_above,power_below);
	return 0;
}
