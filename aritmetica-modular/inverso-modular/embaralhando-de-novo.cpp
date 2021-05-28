#include<bits/stdc++.h>
#define MOD 100000007

using namespace std;

string s;
long long int ans, fat[10001], cont[26];

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    fat[0]=1;
    for(long long int i=1; i<10001; i++) fat[i] = (i*fat[i-1])%MOD;
    while(cin>>s && s!="0"){
        for(int i=0; i<26; i++) cont[i]=0;
        for(int i=0; i<s.size(); i++) cont[s[i]-'a']++;
        ans = fat[s.size()];
        for(int i=0; i<26; i++) ans = (ans * inv_mod(fat[cont[i]], MOD))%MOD;
        cout << ans << endl;
    }
    return 0;
}