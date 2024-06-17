#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void addedg(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printlist(vector<int> adj[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for(int x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}
void BFS(vector<int> adj[], int v) {
    vector<bool> visited(v, false);
    queue<int> q;
    visited[0] = true;
    q.push(0);
    while(!q.empty()) {
        int m = q.front();
        q.pop();
        cout << m << " ";
        for(auto x : adj[m]) {
            if(!visited[x]) { 
                visited[x] = true; 
                q.push(x);
            }
        }
    }
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
    // Uncomment to print the adjacency list
    // printlist(adj, n);
    cout << "BFS Traversal starting from vertex 0 : ";
    BFS(adj, n);
    cout << endl;
    return 0;
}
