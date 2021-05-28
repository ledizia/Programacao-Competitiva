#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n;
int n4, n9, n25;

int main(){_
    cin >> n;
    for(int i=0; i<n.size(); i++) n4 = (n4*10 + n[i]-'0')%4;
    for(int i=0; i<n.size(); i++) n9 = (n9*10 + n[i]-'0')%9;
    for(int i=0; i<n.size(); i++) n25 = (n25*10 + n[i]-'0')%25;
	
    if(!n4) cout << "S" << endl;
    else cout << "N" << endl;
    if(!n9) cout << "S" << endl;
    else cout << "N" << endl;
    if(!n25) cout << "S" << endl;
    else cout << "N" << endl;
	return 0;
}