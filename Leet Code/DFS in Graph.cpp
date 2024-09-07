class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<int> adj[],int vis[],vector<int>& res){
        vis[node]=1;
        res.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]) dfs(it,adj,vis,res);
        }
        
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vector<int> res;
        dfs(0,adj,vis,res);
    }
};
