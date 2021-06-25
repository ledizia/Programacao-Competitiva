#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAMN 123

using namespace std;

int pai[TAMN];
int t, n, m, x, y, r, c;

int id(int n){
	if(pai[n]==n) return n;
	return pai[n] = id(pai[n]);
}

int uniao(int x, int y){
	x = id(x);
	y = id(y);
	pai[x]=y;
}

int main(){_
    cin >> t;
    while(t--){
        cin >> n >> m;
        r=n;
        for(int i=0; i<=n; ++i) pai[i]=i;
        while(m--){
	       cin >> x >> y;;
           if(id(x)!= id(y)) --r;

           uniao(x,y);
        }
		cout << "Caso #" << ++c << ": ";
		if(r-1) cout << "ainda falta(m) "<< r-1 <<" estrada(s)" << endl;
		else cout << "a promessa foi cumprida" << endl;
	}
	return 0;
}