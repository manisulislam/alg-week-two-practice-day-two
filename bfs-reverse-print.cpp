#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;

//adjacency list 
vector<int>adjList[N];

//visited bool array
bool visited[N];

void bfs(int s){
    queue<int>q;
    stack<int>myStack;
    
    q.push(s);
    visited[s]=true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adjList[u]){
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            myStack.push(v);
            cout<<myStack.top()<<" ";
           
        }
        
        // cout<<u<<" "
    }
    
    

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
    bfs(1);
    
    return 0;
}