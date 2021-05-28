#include<bits/stdc++.h>
using namespace std;

long long int d,e;

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    cin >> d >> e;
    if(__gcd(d, e)!=1) cout << "IMPOSSIVEL" << endl;
    else cout << min(inv_mod(d, e) + (inv_mod(d, e)*d-1)/e, inv_mod(e, d) + (inv_mod(e, d)*e-1)/d) << endl; 
    return 0;
}