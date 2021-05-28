#include<bits/stdc++.h>

using namespace std;

long long int n, p, x;

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
	while(cin>>n){
		x=n;
		p=1;
		while(x){
			p*=10;
			x/=10;
		}
		if(fexpo(n,n,p)==n) cout << "SIM" << endl;
		else cout << "NAO" << endl;
	}
	return 0;
}