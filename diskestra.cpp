#include <iostream>
#include<queue>
#include <vector>
using namespace std;
void addEdge(vector<vector<int>> adj[], int u, int v, int d) {
    adj[u].push_back({d,v});
    adj[v].push_back({d,u}); 
}
int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    vector<vector<int>>adj[n];
    addEdge(adj, 0, 1,2);
    addEdge(adj, 0, 2,3);
    addEdge(adj, 1, 3,2);
    addEdge(adj, 2, 3,4);
    addEdge(adj, 3, 4,9);
    addEdge(adj, 3, 5,7);
    addEdge(adj, 4, 6,8);
    addEdge(adj, 5, 6,6);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int>dis(n, 1e9);
    dis[0] = 0;
    pq.push({0,0});   
    while(!pq.empty()){
       auto it =  pq.top();
       pq.pop();
       int d = it.first;
       int node = it.second;
      for(auto it : adj[node]){
        int edgWeight = it[0];
        int adjnode = it[1];
        if(d + edgWeight < dis[adjnode]){
            dis[adjnode] = d + edgWeight;
            pq.push({d + edgWeight, adjnode});
        }
      }
    } 
    for(int i = 0; i < n; i++){
        cout<<dis[i] << " ";
    }
}




