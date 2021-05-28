#include<bits/stdc++.h>
#define MOD (24*60*60)
using namespace std;

string n;
long long int h, m, s;

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
	cin >> n;
    s=1;
    for(int i=0; i<n.size(); i++){ 
        long long int a = fexpo(s, 10, MOD);
        long long int b = fexpo(2, (n[i]-'0'), MOD);

        s = (a*b)%MOD;
    }
    s = (s-1+MOD)%MOD;
    m = s/60;
    s = s%60;
    h = m/60;
    m = m%60;

    if(h<10) cout << "0";
    cout << h << ":";
    if(m<10) cout << "0";
    cout << m << ":";
    if(s<10) cout << "0";
    cout << s << endl; 

	return 0;
}