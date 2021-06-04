#include<bits/stdc++.h>
#define TAM 200000

using namespace std;

int n, m, k, ans, a[TAM], b[TAM];

int main(){
    cin >> n >> m >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    for(int i=0, j=0; i<n; i++){
        while(b[j] < a[i] - k){
            j++;
            if(j==m) break;
        }
        if(j==m) break;
        if(b[j] <= a[i] + k){
            ans++;
            j++;
        }
        if(j==m) break;
    }
    cout << ans << endl;
}
