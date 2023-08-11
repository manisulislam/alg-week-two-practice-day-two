#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;

//adjacency list 
vector<int>adjList[N];

//visited bool array
bool visited[N];
stack<int>myStack;

void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while (!q.empty())
    {
        int u=q.front();
        q.pop();
        myStack.push(u);
        for(int v:adjList[u]){
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
           
           
           
        }
        
       
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
    for( int i=0; i<n; i++){
        cout<<myStack.top()<<" ";
        myStack.pop();
    }

    
    return 0;
}