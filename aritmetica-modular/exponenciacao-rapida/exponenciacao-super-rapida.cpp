#include<bits/stdc++.h>
using namespace std;

string n, e;
long long int m, b=0, ans=1;

long long int fexpo(long long int b, long long int e, long long int m){
	long long int ans=1;
	while(e){
		if(e%2) ans= (b*ans)%m;
		e/=2;
		b = (b*b)%m;
	}
	return ans;
}

int main(){
	cin >> n >> e >> m;
    for(int i=0; i<n.size(); i++) b = ((b*10)%m + (n[i]-'0')%m)%m;
    for(int i=0; i<e.size(); i++) ans = (fexpo(ans, 10, m)%m * fexpo(b, (e[i]-'0'), m)%m)%m;
	cout << ans << endl;
    return 0;
}