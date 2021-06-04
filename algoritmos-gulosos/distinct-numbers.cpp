#include<bits/stdc++.h>

using namespace std;

map<int, int> numeros;
int n, x;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        numeros[x]++;
    }
    cout << numeros.size() << endl;
}