#include<bits/stdc++.h>

using namespace std;

string x, p;
int aux = 0;

int main(){
    while(cin >> x){
        if(aux++) cout << " ";
        p="";
        if(x.size()>=4){
            if(x[0]==x[2] && x[1]==x[3]){
                for(int i=2; i<x.size(); i++){
                    p += x[i];
                }
                x = p;
            }
        }

        cout << x;
    }
    cout << endl;
	return 0;
}