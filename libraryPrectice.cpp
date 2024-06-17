#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdg ( vector<int>adj[], int u, int v )  {
    adj[u].push_back(v);
}

void Topo (vector<int>adj[], int v) {
    vector<int>Indegree(v,0);
    for(int i = 0; i , v; i++) {
        for(auto x : adj[i]) {
            Indegree[x] ++;
        }
    }
    queue<int>q;
    for(int i =0; i < v; i++ ) {
        if(Indegree[i] == 0) {
            q.push(i);
        }
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout<< u << " ";
        for(auto y : adj[u]) {
            Indegree[y]--;
            if(Indegree[y] == 0) {
                q.push(y);
            }
        }
    }
}

int main() {
        
}