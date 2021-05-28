#include<bits/stdc++.h>

using namespace std;

long long int n, t, a, b, m[100001];

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> m[i];
    cin >> t >> a >> b;
    if(__gcd(a, t)!=1){
        cout << "DECIFRAGEM AMBIGUA" << endl;
    }
    else{
        a=a%t;
        b=b%t;
        for(int i=0; i<n; i++){
            if(i) cout << " ";
            cout << ((m[i] - b + t)%t * inv_mod(a,t)%t)%t;
        }
        cout << endl;
    }
    return 0;
}