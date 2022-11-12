#include <bits/stdc++.h>
using namespace std;
bool CheckCycle(int i, vector<bool> &visited, vector<bool> &DfsVisited, vector<int> adj[],int V){
    visited[i] = true;
    DfsVisited[i] = true;
    cout<<"Visited: ";
    for(int j = 0;j<V;j++){
        if(visited[j]){
            cout<<"T"<<" ";
        }
        else{
            cout<<"F"<<" ";
        }
    }
    cout<<endl;
    cout<<"Dfs Visited:";
    for(int j = 0;j<V;j++){
        if(DfsVisited[j]){
            cout<<"T"<<" ";
        }
        else{
            cout<<"F"<<" ";
        }
    }
    cout<<endl;
    for(int x: adj[i]){
        if(!visited[x]){
            if(CheckCycle(x, visited, DfsVisited, adj,V)){
                return true;
            }
        }
        else if(DfsVisited[x]){
            return true;
        }
    }
    visited[i] = false;
    return false;
}
bool isCyclic(int V, vector<int> adj[]) {
    // code here
    vector<bool> visited(V,false);
    vector<bool> DfsVisited(V,false);
    for(int i = 0;i<V;i++){
        if(!visited[i]){
            if(CheckCycle(i, visited, DfsVisited, adj,V)) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    if(isCyclic(V, adj) ){
        cout<<"Cycle detected"<<endl;
    }
    else{
        cout<<"Cycle not detected"<<endl;
    }
}

// } Driver Code Ends