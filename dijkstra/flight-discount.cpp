#include<bits/stdc++.h>
using namespace std;
#define N 100002
#define M 200002
#define INF 2000000000000009

long long int n, m, u, v, w, res, dist1[N], dist2[N], vis1[N], vis2[N]; 
long long int arestas[M][3];
vector<pair<long long int, long long int>> adj1[N], adj2[N];

/*
ideia:  dist1 = Guarda as distâncias de 1 até os outros vértices
        dist2 = Guarda as distâncias dos outros vértices até n
*/

void dijkstra(vector<pair<long long int, long long int>> adj[], long long int dist[], long long int vis[], long long int ini){
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        vis[i] = 0;
    }
    dist[ini] = 0;

    priority_queue<pair<long long int, long long int>> pq;
    pq.push({ 0, ini });

    while(pq.size()) {
        int u = pq.top().second;
        pq.pop();
        if (vis[u]) {
            continue;
        }
        vis[u] = 1;

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({ -dist[v], v });
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> u >> v >> w;
        arestas[i][0]=u;
        arestas[i][1]=v;
        arestas[i][2]=w;
        adj1[u].push_back({v, w});
        adj2[v].push_back({u, w});
    }

    dijkstra(adj1, dist1, vis1, 1);
    dijkstra(adj2, dist2, vis2, n);

    res = INF;

    for (int i = 0; i < m; i++) {
        res = min(res, dist1[arestas[i][0]] + dist2[arestas[i][1]] + arestas[i][2]/2);
    }
    cout << res << endl;
    return 0;
}