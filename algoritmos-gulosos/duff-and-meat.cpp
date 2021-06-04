#include<bits/stdc++.h>
#define TAM 100000

using namespace std;

int n, x, ans, a[TAM], p[TAM];

int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] >> p[i];
    x=p[0];
    ans = a[0]*x;
    for(int i=1; i<n; i++){
        if(p[i]<x) x=p[i];
        ans+=a[i]*x;
    }
    cout << ans << endl;
}
