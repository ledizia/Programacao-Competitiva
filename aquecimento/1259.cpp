#include<bits/stdc++.h>
#define TAM 100123
using namespace std;

int n, x, p, im;
int par[TAM], imp[TAM];

int cmp(int a, int b){
	return a>b;
}

int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> x;
		if(x%2==0){
			par[p]=x;
			p++;
		}
		else{
			imp[im]=x;
			im++;
		}
	}
	sort(par, par+p);
	sort(imp, imp+im, cmp);
	
	for(int i = 0; i < p; ++i){
		cout << par[i] << endl;
	}
	for(int i = 0; i < im; ++i){
		cout << imp[i] << endl;
	}
	return 0;
}