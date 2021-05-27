#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007

using namespace std;

string abc;
long long int r;

int main(){_
	while(cin >> abc){
        r=0;
        for(int i=0; i<abc.size(); i++){
            r = ((r*26) + (abc[i]-'A'))%MOD;            
        }
        cout << r << endl;
    }
	return 0;
}