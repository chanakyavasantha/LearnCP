//2. Find the Longest path in a graph given that is DAG(Directed Acyclic Graph)
#include <bits/stdc++.h>
using namespace std;

vector<int> Bfs(int v,vector<int> adj[]){
    queue<int> q;
    vector<bool> visited(v,false);
    vector<int> BFS;
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        BFS.push_back(q.front());
        for(int x: adj[q.front()]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
        q.pop();
    }
    return BFS;
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
    vector<int> ans = Bfs(V,adj);
    cout<<"BFS: ";
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;

}