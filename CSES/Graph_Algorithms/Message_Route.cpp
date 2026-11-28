#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    vector<int> visited(n + 1, 0);
    vector<int> distance(n + 1, 0);

    visited[1] = -1;
    q.push(1);

    while (!q.empty()) {
        int s = q.front();
        q.pop();

        if (s == n) {
            cout << distance[s] + 1 << "\n";
            
            vector<int> route;
            route.reserve(distance[s]);

            int i = s;
            route.push_back(i);
            while (visited[i] != -1) {
                route.push_back(visited[i]);
                i = visited[i];
            }

            for (auto it = route.rbegin(); it != route.rend(); ++it) {
                cout << *it << " ";
            }

            return 0;
        }

        for (auto u : adj[s]) {
            if (visited[u] != 0) continue;
            visited[u] = s;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}