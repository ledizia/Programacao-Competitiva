#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

map<char, int> cont;
map<char, int>::iterator it;
string s;
long long int ans, fat[1001];

int inv_mod(long long int a, long long int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

int main(){
    fat[0]=1ll;
    for(long long int i=1; i<=1000; i++) fat[i] = (i*fat[i-1])%MOD;
    while(cin>>s){
        cont.clear();
        for(int i=0; i<s.size(); i++) cont[s[i]]++;
        ans = fat[s.size()];
        for(it=cont.begin(); it!=cont.end(); it++){
            ans = (ans * inv_mod(fat[it->second], MOD))%MOD;
        }
        cout << ans << endl;
        
    } 
    return 0;
}