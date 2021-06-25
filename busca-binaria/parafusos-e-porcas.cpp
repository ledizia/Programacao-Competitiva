#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 10123
using namespace std;

int n, x, y, num, t, pos1, pos2, v[MAXN];

int bb1(){
	int l=0, h=t-1, mid;
	while(l<h){
		mid=l + (h-l)/2;
		if(v[mid]>=num) h=mid;
		else l=mid+1;
	}
	return l;
}

int bb2(){
	int l=0, h=t, mid;
	while(l<h){
		mid=l + (h-l)/2;
		if(v[mid]<=num) l=mid+1;
		else h=mid;
	}
	return (l-1);
}

int main(){_
	while(cin>>n){
        t=0;
        while(n--){
            cin >> x >> y;
            for(int i=x; i<=y; i++){
                v[t]=i;
                t++;
            }
        }
        cin >> num;
        sort(v, v+t);
        pos1 = bb1();
        pos2 = bb2();
        if(v[pos1]==num && v[pos2]==num){
            cout << num << " found from " << pos1 << " to " << pos2 << endl;
        }
        else{
            cout << num << " not found" << endl;
        }
    }
	return 0;
}