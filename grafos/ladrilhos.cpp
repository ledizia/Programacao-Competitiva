#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAMN 207

using namespace std;
int vis[TAMN][TAMN];
int mat[TAMN][TAMN];
int n, m, cor, cont, ans=40000;

void ff(int i, int j){
	if(i>n || j>m || i<1 || j<1)
		return;
	if(vis[i][j] == 1 || mat[i][j]!=cor)
		return;
	cont++;
	vis[i][j] = 1;
	ff(i+1, j);
	ff(i-1, j);
	ff(i, j+1);
	ff(i, j-1);
}

int main(){_
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j) cin >> mat[i][j];
	
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(vis[i][j]==0){
				cont=0;
				cor=mat[i][j];
				ff(i, j);
				ans=min(cont, ans);
			}
		}
	}
	cout << ans << endl;
	return 0;
}