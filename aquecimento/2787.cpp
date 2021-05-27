#include<bits/stdc++.h>

using namespace std;

int l, c, x;

int main(){
    cin >> l >> c;
    if(l%2==0 && c%2==0) x = 1;
    else if(l%2==1 && c%2==1) x = 1;
    else x = 0;

    cout << x << endl;  

	return 0;
}