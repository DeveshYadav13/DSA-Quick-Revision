#include <bits/stdc++.h>
using namespace std;

void dfs(int n, vector<bool>&visited, vector<int>adjl[]){
    cout<<n<<" ";
    visited[n]=true;
    vector<int>v = adjl[n];
    for(auto i : v){
        if(!visited[i]){
            dfs(i,visited,adjl);
        }
    }
}

int main(){
    int n,m;        
    cin>>n>>m;       

    // Adjacency list
    vector<int>adjl[n+1];

    // inputting the edges
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    
    cout<<"\nAdjacency list :\n";
    for (int i = 1; i <=n; i++)
    {
        vector<int>v=adjl[i];
        cout<<i<<" : ";
        for(auto i : v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    vector<bool>visited(n,false);
    cout<<"DFS Traversal : \n";
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            dfs(i,visited,adjl);
        }
    }
 
    return 0;
}