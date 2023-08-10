#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<int>adjList[N];
bool visited[N];
void dfs(int u){
    visited[u]=true;
    for(int v: adjList[u]){
        if(visited[v]==true) continue;
        dfs(v);
    }
    
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    dfs(1);
    int cc=0;
    for(int i=0; i<=n; i++){
        if(visited[i]==true) continue;
        dfs(i);
        cc++;

    }
    cout<<cc<<endl;
    
    return 0;
}