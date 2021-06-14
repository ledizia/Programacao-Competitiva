#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 10123
using namespace std;

int n, q, v[MAXN], t, pos, x;

int bb(){
	int l=0, h=n-1, mid;
	while(l<h){
		mid=l + (h-l)/2;
		if(v[mid]>=x) h=mid;
		else l=mid+1;
	}
	return l;
}

int main(){_
	while((cin >> n >> q) && (n||q)){
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v, v+n);
		t++;
		cout << "CASE# " << t << ":" << endl;
		for(int i=0; i<q; i++){
			cin >> x;
			pos = bb();
			if(v[pos] == x) cout << x << " found at " << (pos + 1) << endl;
			else cout << x << " not found" << endl;
		}
    }
	return 0;
}