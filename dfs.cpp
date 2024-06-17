#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void addEge(vector<int>adj[], int v1 ,int u1 ) {
    adj[v1].push_back(u1);
    adj[u1].push_back(v1);
}
void printList (vector<int>adj[], int v) {
    for(int i = 0; i < v; i++) {
        cout<<"Adjeceny list of vertex " << i << " : ";
        for(int x : adj[i]) {
            cout<< x << " : ";
        }
    }
}
void DFS (vector<int>adj[], int v) {
    vector<bool>visited (v, false);
    stack<int>st;
    visited[0] = true;
    st.push(0);
    while ( !st.empty()) {
        int u = st.top();
        st.pop();
        cout<< u << " ";
        for(int x : adj[u]) {
            if(!visited[x]) {
                visited[x] = true;
                st.push(x);
            }
        }
    }
}

int main() {
  int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<int> adj[n];
    addEge(adj, 0, 2);
    addEge(adj, 0, 1);
    addEge(adj, 1, 4);
    addEge(adj, 1, 3);
    addEge(adj, 2, 3);
    // Uncomment to print the adjacency list
    // printlist(adj, n);
    cout << "BFS Traversal starting from vertex 0 : ";
    DFS(adj, n);
    cout << endl;
    return 0;
}

