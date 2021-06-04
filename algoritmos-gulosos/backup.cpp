#include<bits/stdc++.h>
#define TAM 100000

using namespace std;

int t, i, ans;

int main(){
    cin >> t;
    for(i=8192; i>=1; i/=2){
        if(i<=t){
            ans += t/i;
            t -= (t/i)*i;
        }
        if(!t) break;
    }
    cout << ans << endl;
}
