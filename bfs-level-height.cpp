#include<bits/stdc++.h>
using namespace std;

const int N =1e3+5;
vector<int>adjList[N];
bool visited[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while (!q.empty())
    {
       int u=q.front();
       q.pop();
       for(int v: adjList[u]){
         if(visited[v]==true) continue;
         q.push(v);
         visited[v]=true;
         level[v]=level[u]+1;
       }
    }
    

}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bfs(1);
    int k;
    cin>>k;
    cout<<"Level of "<<k<<" "<<"="<<" "<<level[k];
    return 0;
}