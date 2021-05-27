#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAM 507

using namespace std;

int j, r, p, m, v[TAM];

int main(){_
	cin >> j >> r;
    
    for(int i=0; i<j*r; i++){
        cin >> p;
        v[i%j]+=p;
    }
    
    m=0;
    for(int i=1; i<j; i++){
        if(v[i]>=v[m]){
            m=i;
        }
    }

    cout << m+1 << endl;
	return 0;
}