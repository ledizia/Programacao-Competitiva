#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

string s;
long long int ans, fat[100001], cont[26];

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    fat[0]=1ll;
    for(long long int i=1; i<=100000; i++) fat[i] = (i*fat[i-1])%MOD;
    cin >> s;
    
    for(int i=0; i<s.size(); i++) cont[s[i]-'a']++;
    
    ans = fat[s.size()];
    
    for(int i=0; i<26; i++) ans = (ans * inv_mod(fat[cont[i]], MOD))%MOD;
    
    cout << ans << endl;
    
    return 0;
}