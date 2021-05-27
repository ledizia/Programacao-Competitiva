#include<bits/stdc++.h>

using namespace std;

int b, g;

int main(){
    cin >> b >> g;
    if(floor(g/2) - b <= 0){
        cout << "Amelia tem todas bolinhas!" << endl;
    }
    else{
        cout << "Faltam " << (floor(g/2) - b) <<" bolinha(s)" << endl;
    }
	return 0;
}