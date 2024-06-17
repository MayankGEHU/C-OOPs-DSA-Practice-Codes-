//------------------- TOPOLOGICAL SORT USING BFS
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void addedg(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}
void Topo(vector<int> adj[], int v) {
    vector<int> Indegree(v, 0);
    // Calculate in-degree for each vertex
    for (int i = 0; i < v; i++) {
        for (auto x : adj[i]) {
            Indegree[x]++;
        }
    }
    queue<int> q;
    // Push vertices with in-degree 0 into the queue
    for (int i = 0; i < v; i++) {
        if (Indegree[i] == 0) {
            q.push(i);
        }
    }
    // Perform topological sorting
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        // Reduce the in-degree of adjacent nodes
        for (auto y : adj[u]) {
            Indegree[y]--;
            if (Indegree[y] == 0) {
                q.push(y);
            }
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<int> adj[n];
    addedg(adj, 1, 0);
    addedg(adj, 1, 2);
    addedg(adj, 3, 2);
    addedg(adj, 3, 4);
    cout << "Topological Order: ";
    Topo(adj, n);
    return 0;
}

//------------------- ADJECEMCY LIST ADD ON DFS PROGRAM
//------------------- TOPOLOGICAL SORT USING DFS