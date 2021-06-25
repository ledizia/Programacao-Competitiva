#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

unsigned long long t, n, resp;

unsigned long long f(unsigned long long mid){
	return (((1ull+mid)*mid)/2ull);
}

unsigned long long bb(){
	unsigned long long l=0ull, h=2*sqrt(n), mid;
	while(l<h){
		mid = l + (h-l)/2ull;
		if(f(mid)>=n) h=mid;
		else l=mid+1ull;
	}
	if(f(l)!=n) return l-1;
	return l;	
}


int main(){_
	cin >> t;
	while(t--){
		cin >> n;
		resp = bb();
		cout << resp << endl;
	}
	return 0;
}