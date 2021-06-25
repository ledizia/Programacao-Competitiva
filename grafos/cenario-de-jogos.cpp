#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAMN 1030

using namespace std;
int vis[TAMN][TAMN];
char mat[TAMN][TAMN];
int n, m, ans;

void ff(int i, int j){
	if(i>n || j>m || i<1 || j<1)
		return;
	if(vis[i][j] == 1 || mat[i][j]=='o')
		return;
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
			if(vis[i][j]==0 && mat[i][j]!='o'){
				ans++;
				ff(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}