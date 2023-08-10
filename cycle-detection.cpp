#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int>adjList[N];
bool visited[N];

bool dfs(int u, int p=-1){
    visited[u]=true;
    bool isCycleExist=false;
    for(int v: adjList[u]){
        
        if(v==p) continue;
        if(visited[v]==true) return true;
        isCycleExist |=dfs(v, u);
    }
    return isCycleExist;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }
    dfs(1);
    bool isCycle=false;
    for(int i=0; i<n; i++){
        if(visited[i]) continue;
        isCycle|=dfs(i);
    }
    if(isCycle){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}