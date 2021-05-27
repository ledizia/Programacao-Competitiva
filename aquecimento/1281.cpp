#include<bits/stdc++.h>

using namespace std;

map<string, double> precos;
int n, m, q;
string nome;
double p, t;

int main(){
	cout << fixed << setprecision(2);
	cin >> n;
	while(n--){
		t=0;
		cin >> m;
		while(m--){
			cin>>nome>>p;
			precos[nome]=p;
		}
		cin >> m;
		while(m--){
			cin >> nome >> q;
			t+= precos[nome]*q;
		}
		cout<<"R$ "<<t<<endl;
		precos.clear();
	}
	return 0;
}