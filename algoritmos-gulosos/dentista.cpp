#include<bits/stdc++.h>
#define TAM 10000
using namespace std;

struct tempo{
    int inicio, fim;
};

bool cmp(tempo a, tempo b){
    if(a.fim != b.fim) return a.fim < b.fim;
}

int n, ans, aux;
tempo t[TAM];

int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> t[i].inicio >> t[i].fim;
    sort(t, t+n, cmp);
    aux = t[0].fim;
    ans++;
    for(int i=1; i<n; i++){
        if(t[i].inicio >= aux){
            ans++;
            aux=t[i].fim;
        }
    }

    cout << ans << endl;
    return 0;
}