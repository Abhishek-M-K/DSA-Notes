/*
                                                                      DFS TRAVERSAL OF A GRAPH
                                                                ------------------------------------
SPACE COMPLEXITY: O(N+2E)


class Solution {
  private:
    void dfs(int node, int vis[], vector<int> adj[], vector<int> &dfslist){
        vis[node]=1;
        dfslist.push_back(node);

        //traversing
        for(auto it: adj[node]){
            if(vis[it]!=1){
                dfs(it,vis,adj,dfslist);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start=0;
        vector<int> dfslist;
        dfs(start, vis, adj, dfslist);

        return dfslist;
    }
};

*/