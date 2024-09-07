#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> adj[],int n){
    int vis[n] = {0};
    vis[0]=1;
    queue<int> q;
    vector<int> bfs;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}

void dfs(int node,vector<int> adj[],int vis[],vector<int>& ls){
    vis[node]=1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}

int main(){
    vector<int> adj[10];
    adj[0]={1};
    adj[1]={2,6};
    adj[2]={1,3,4};
    adj[3]={2};
    adj[4]={2,5};
    adj[5]={4,8};
    adj[6]={1,7,9};
    adj[7]={6,8};
    adj[8]={5,7};
    adj[9]={6};

    vector<int> bfsTraversal=bfs(adj,10);
    for(auto x:bfsTraversal) cout<<x<<" ";

    vector<int> dfsTraversal;
    int vis[10];
    dfs(1,adj,vis,dfsTraversal);
    for(auto x:dfsTraversal) cout<<x<<" ";
}