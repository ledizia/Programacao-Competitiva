#include<bits/stdc++.h>
#define _ ios_base :: sync_with_stdio(0);

using namespace std;

int n,x,cont;

int main(){_
	while(cin>>n){
		x=1;
		x%=n;
		cont=1;
		while(x!=0){
			cont++;
			x= x*10 + 1;
			x%=n;
		}
		cout << cont << endl;	
	}
	return 0;
}