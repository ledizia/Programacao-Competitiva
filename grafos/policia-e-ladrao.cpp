#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define TAMN 6

using namespace std;
int vis[TAMN][TAMN];
int mat[TAMN][TAMN];
int t, n=5, m=5;

void ff(int i, int j){
	if(i>n || j>m || i<1 || j<1)
		return;
	if(vis[i][j] == 1 || mat[i][j]==1)
		return;
    vis[i][j]=1;
	ff(i+1, j);
	ff(i-1, j);
	ff(i, j+1);
	ff(i, j-1);
}

int main(){_
    cin >> t;
    while(t--){

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> mat[i][j];
                vis[i][j]=0;
            }
        }
        ff(1, 1);
        if(vis[5][5]==1) cout << "COPS" << endl;
        else cout << "ROBBERS" << endl;
    }
	return 0;
}