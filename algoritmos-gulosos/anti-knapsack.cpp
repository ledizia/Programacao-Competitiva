#include<bits/stdc++.h>
#define TAM 200000

using namespace std;

int t, n, k, ans, a;

int main(){
    cin >> t;
    while(t--){
        a=0;
        cin >> n >> k;
        ans = n-k;
        ans += k/2;
        cout << ans << endl;
        for(int i=k+1; i<=n; i++){
            if(a++) cout << " ";
            cout << i;
        }
        for(int i=(k+1)/2; i<k; i++){
            if(a++) cout << " ";
            cout << i;
        }
        cout << endl;
    }
}
