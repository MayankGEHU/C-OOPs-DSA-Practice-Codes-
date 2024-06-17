//----------------Find the level of given node in an Undirected Graph


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addedg(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int nodeLevel(int v, vector<int> adj[], int x) {
    queue<pair<int, int>> q;
    vector<int> vis(v, 0);
    q.push({0, 0}); // Start BFS from node 0 with distance 0
    vis[0] = 1; // Mark node 0 as visited
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int node = p.first;
        int dist = p.second;

        if (node == x)
            return dist; // If we reach the target node x, return its distance

        for (auto it : adj[node]) {
            if (!vis[it]) {
                q.push({it, dist + 1}); // Push adjacent unvisited node with increased distance
                vis[it] = 1; // Mark the node as visited
            }
        }
    }

    return -1; // Return -1 if node x is not reachable
}
int main() { 
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<int> adj[n];
    addedg(adj, 0, 2);
    addedg(adj, 0, 1);
    addedg(adj, 1, 4);
    addedg(adj, 1, 3);
    addedg(adj, 2, 3);

    int x;
    cout << "Enter the target node to find its level from node 0: ";
    cin >> x;

    int level = nodeLevel(n, adj, x); // Pass number of vertices 'n' to nodeLevel

    if (level != -1)
        cout << "Level of node " << x << " is " << level << endl;
    else
        cout << "Node " << x << " is not reachable from node 0." << endl;
    return 0;
}
