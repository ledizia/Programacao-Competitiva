#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n;
int n11;

int main(){_
    cin >> n;
    for(int i=0; i<n.size(); i++) n11 = (n11*10 + n[i]-'0')%11;
    
    if(!n11) cout << "S" << endl;
    else cout << "N" << endl;

	return 0;
}