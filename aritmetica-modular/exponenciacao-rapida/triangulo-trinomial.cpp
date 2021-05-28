#include<bits/stdc++.h>

using namespace std;

long long int r,b=3, m=pow(2,31)-1, ans=1;

int main(){
	cin >> r;
	while(r){
		if(r%2) ans= (ans*b)%m;
		r/=2;
		b=(b*b)%m;
	}
	cout << ans << endl;
	return 0;
}