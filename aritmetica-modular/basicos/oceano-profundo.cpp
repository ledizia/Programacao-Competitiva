#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 131071
using namespace std;

string b;
int r;

int main(){_
	while(cin >> b){
        for(int i=0; i<b.size(); i++){
            if(b[i]=='#'){
                if(r) cout << "NO" << endl;
                else cout << "YES" << endl;
                r=0;
            }
            else{
                r = ((r*2) + b[i]-'0')%MOD;
            }
        }
    }
}