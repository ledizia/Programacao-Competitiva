#include<bits/stdc++.h>
using namespace std;

int n, m, k, v[1007];

int main(){
    while(cin >> n >> m >> k && (n||m||k)){
        m%=n;
        for(int i=0; i<n; i++) cin >> v[i];
        cout << v[(k - m + n - 1)%n] << endl;
    }
    return 0;
}