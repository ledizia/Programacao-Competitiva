#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, k, v[100123];
pair<int, int> resp;

void bb(){
	int l=0, h=n-1, mid;
	for(int i=0; i<n; i++){
		l=i;
		while(l<h){
			mid = l + (h-l)/2;
			if(v[i]+v[mid] >= k) h=mid;
			else l=mid+1;
		}
		if(v[i]+v[l]==k){
			resp.first=i;
			resp.second=l;
			break;
		}
	}
}

int main(){_
	cin >> n;
	for(int i=0; i<n; ++i) cin >> v[i];
	cin >> k;
	bb();
	cout << v[resp.first]<< " " << v[resp.second]<< endl;
	return 0;
}