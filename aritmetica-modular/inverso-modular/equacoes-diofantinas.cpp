#include<bits/stdc++.h>
#define MOD 1300031

using namespace std;

long long int t, n, c, ans, fat[2000001];

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    fat[0]=1ll;
    for(long long int i=1; i<2000001; i++) fat[i] = (i*fat[i-1])%MOD;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ans = fat[n+c-1];
        ans = (ans*inv_mod(fat[n-1], MOD))%MOD;
        ans = (ans*inv_mod(fat[c], MOD))%MOD;
        cout << ans << endl;
    }
    return 0;
}