#include<bits/stdc++.h>

using namespace std;

string b, e;
long long int ans, x;

long long int fexpo(long long int b, long long int e, long long int m){
	long long int ans=1;
	while(e){
		if(e%2) ans= (b*ans)%m;
		e/=2;
		b= (b*b)%m;
	}
	return ans;
}

int main(){
	cin >> b >> e;
	
    x=0;
    for(int i=0; i<b.size(); i++) x = (10*x + (b[i]-'0'))%9;
    
    ans = 1;
    for(int i=0; i<e.size(); i++) ans = (fexpo(ans, 10, 9)*fexpo(x,(e[i]-'0'),9))%9; 
    
    if(!ans) ans=9;
    cout << ans << endl;
	
    return 0;
}