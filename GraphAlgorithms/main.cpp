//2. Find the Longest path in a graph given that is DAG(Directed Acyclic Graph)
#include <bits/stdc++.h>
using namespace std;

void dfs(int src,vector<bool> &visited, vector<int> adj[],vector<int> &ans,int V){
    visited[src] = true;
    ans.push_back(src);
    for(int x: adj[src]){
        if(!visited[x]){
            dfs(x,visited,adj,ans,V);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<bool> visited(V,false);
    vector<int> ans;
    dfs(0,visited,adj,ans,V);
    return ans;
}
int main(){
    int V,E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i = 0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> ans = dfsOfGraph(V,adj);
    cout<<"DFS: ";
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;

}