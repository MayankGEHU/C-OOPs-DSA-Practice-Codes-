#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of vertex";
    cin>>n;
    int E =5;
    int u, v, d;
    vector<vector<int>>adj(E);
    vector<int>dist(n, 1e9);
    dist[0] = 0;
    for(int i =0; i < E; i++){
        cin>>u>>v>>d;
        adj[i] = {u,v,d};
    }
    for(int i =0; i < n - 1; i++){
        for(auto i : adj){
            int source = i[0];
            int destination = i[1];
            int cost = i[2];
            if(dist[source]!= 1e9 && dist[source] + cost <dist[destination]){
                dist[destination] = dist[source] + cost;
            } 
        }
    }
    for(int i = 0; i < n; i++){
        cout<<dist[i]<<" ";
    }
}
