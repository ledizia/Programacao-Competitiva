#include<bits/stdc++.h>
using namespace std;
#define N 1002
#define INF 1000000009

int n, m, u, v, w, s, dist[N], vis[N];
vector<pair<int, int> > adj[N];

int dijkstra() {
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        vis[i] = 0;
    }
    dist[s] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push({0,s});

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
    int maior=0, menor=INF;
    for(int i=1; i<=n; i++){
        if(dist[i]!=0) menor = min(dist[i], menor);
        if(dist[i]!=INF) maior = max(dist[i], maior);
    }
    return (maior - menor);
}

int main() {
    cin >> n >> m;
    while (m--) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    cin >> s;

    cout << dijkstra() << endl;

    return 0;
}