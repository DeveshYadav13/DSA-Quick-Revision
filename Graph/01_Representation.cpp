#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;         // n -> no. of nodes
    cin>>n>>m;       // m -> no. of edges

    // Adjacent matrix
    int adj[n+1][n+1]={0};

    // Adjacency list
    vector<int>adjl[n+1];

    // inputting the edges
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;

        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    
    // Adjacency list with weights
    vector<pair<int,int>>adjlw[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;

        adjlw[u].push_back({v,wt});
        adjlw[v].push_back({u,wt});
    }
    
 
    return 0;
}