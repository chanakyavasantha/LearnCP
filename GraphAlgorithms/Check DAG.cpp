//1. Is G a Directed Un-weighted graph
#include<bits/stdc++.h>
using namespace std;
bool cycle = false;
bool isCycle(int source,vector<vector<int>> &AdjList,vector<bool> &visited,vector<bool> &stack){
    stack[source] = true;
    if(!visited[source]){
        visited[source] = true;
        for(auto i: AdjList[source]){
            if(!visited[i] and isCycle(i,AdjList,visited,stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
    stack[source] = false;
    return false;
}
int main(){
    int v,e;
    cout<<"Enter number of vertices: "<<endl;
    cin>>v;
    cout<<"Enter number of edges: "<<endl;
    cin>>e;
    vector<vector<int>> AdjList(v);
    for(int i = 0;i<e;i++){
        int U,V;
        cout<<"Enter U,V such that there is an outgoing edge from U to V"<<endl;
        cin>>U>>V;
        AdjList[U].push_back(V);
    }
    bool directed = false;
    int cnt = 0;
    map<int,int> m;
    for(int i = 0;i<v;i++){
        m[i] = 0;
    }
    for(int i = 0;i<v;i++){
        for(int j = 0;j<AdjList[i].size();j++){
            m[AdjList[i][j]] += 1;
        }
    }
    for(int i = 0;i<v;i++){
        cnt += m[i];
    }
    if(cnt == v){
        directed = true;
    }
    else{
        directed = false;
    }
    vector<bool> stack(v,0);
    vector<bool> visited(v,0);
    for(int i = 0;i<v;i++){
        if(!visited[i] and isCycle(0,AdjList,visited,stack)){
            cycle = true;
        }
    }
    if(!cycle and directed){
        cout<<"The graph is directed acyclic graph"<<endl;
    }
    else{
        cout<<"The graph is not a directed acyclic graph"<<endl;
    }

}
