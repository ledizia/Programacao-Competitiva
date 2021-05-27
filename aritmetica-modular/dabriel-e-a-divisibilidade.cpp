#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAM 100123
using namespace std;

string n;
int m, d, div1[TAM], r, cont, aux;

int main(){_
	cin >> n;
	cin >> m;
	while(m--){
		cin >> d;
		r=0;
		for(int i=0; i<n.size(); i++){
			r=(r*2 + (n[i]-'0'))%d;
		}
		if(!r){
			div1[cont]=d;
			cont++;
		} 
	}
	
	
	if(!cont) cout << "Nenhum";
	else{
		sort(div1, div1+cont);
		for(int i=0; i<cont; i++){
			if(i) cout << " ";
			cout << div1[i];
		}
	}
	cout << endl;
	return 0;
}