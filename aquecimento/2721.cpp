#include<bits/stdc++.h>

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

int main(){
	while(i--){
		cin >> n;
		acm+=n;
	}
	v = (acm%9)-1;
    if(v<0) v=8;
	cout << renas[v] << endl;
	return 0;
}