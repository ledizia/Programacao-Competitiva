#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, i=9, acm, v;
string renas[]={"Dasher", 
				"Dancer", 
				"Prancer", 
				"Vixen", 
				"Comet", 
				"Cupid", 
				"Donner", 
				"Blitzen", 
				"Rudolph"};

int main(){_
	while(i--){
		cin >> n;
		acm+=n;
	}
	v = (acm-1)%9;
    cout << renas[v] << endl;
	return 0;
}