#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n;
int n2, n3, n5;

int main(){_
    cin >> n;
    for(int i=0; i<n.size(); i++) n2 = (n2*10 + n[i]-'0')%2;
    for(int i=0; i<n.size(); i++) n3 = (n3*10 + n[i]-'0')%3;
    for(int i=0; i<n.size(); i++) n5 = (n5*10 + n[i]-'0')%5;
	
    if(!n2) cout << "S" << endl;
    else cout << "N" << endl;
    if(!n3) cout << "S" << endl;
    else cout << "N" << endl;
    if(!n5) cout << "S" << endl;
    else cout << "N" << endl;
	return 0;
}