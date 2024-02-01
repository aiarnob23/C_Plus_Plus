#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long

vector<int>edges[100];
vector<bool>vis(100,false);

void dfs(int source);

int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++){
        int u,v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    int source;
    cin>>source;
    dfs(source);
    
}

void dfs(int source){
    vis[source]=true;
    cout<<"visited "<<source<<endl;
    for(auto v : edges[source]){
        if(!vis[v]){
            dfs(v);
        }
    }
}