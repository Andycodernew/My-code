#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int MAXN = 200005;

int n, m, q;
vector<int> adj[MAXN];
int c[MAXN];
vector<int> p;
bool vis[MAXN];

bool dfs(int u, int v) {
    vis[u] = true;
    p.push_back(u);
    if (u == v) return true;
    for (int n : adj[u]) {
        if (!vis[n]) {
            if (dfs(n, v)) return true;
        }
    }
    p.pop_back();
    return false;
}

int findMinC(int u, int v) {
    fill(vis, vis + n + 1, false);
    p.clear();
    if (!dfs(u, v)) return -1;

    int minC = INT_MAX;
    for (int node : p) {
        minC = min(minC, c[node]);
    }
    return minC;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cin >> q;
    while (q--) {
        int u, v;
        cin >> u >> v;
        int res = findMinC(u, v);
        cout << res << "\n";
    }

    return 0;
}
