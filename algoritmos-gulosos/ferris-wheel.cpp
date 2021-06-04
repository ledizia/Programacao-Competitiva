#include<bits/stdc++.h>
#define TAM 200000

using namespace std;

int n, x, p[TAM], ans;

int main(){
    cin >> n >> x;
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p, p+n);
    for(int i=0, j=n-1; i<=j; j--){
        if(p[i] + p[j] <= x) i++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
