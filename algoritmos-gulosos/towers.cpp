#include<bits/stdc++.h>
#define TAM 200000

using namespace std;

int n, ans, v[TAM], x, i;

int buscaBinaria(int v[], int t, int x){
    int inicio = 0;
    int fim = t-1;
    int meio;
    while(inicio<fim){
        meio = (inicio+fim)/2;
        if(v[meio]<=x){
            inicio = meio+1;
        }
        else{
            fim = meio;
        }
    }
    return inicio;
}

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        if(!ans){ 
            v[ans]=x;
            ans++;
        }
        else{
            i = buscaBinaria(v, ans, x);
            if(i==(ans-1) && x>=v[ans-1]){
                v[ans] = x;
                ans++;
            }
            else{
                v[i] = x;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
