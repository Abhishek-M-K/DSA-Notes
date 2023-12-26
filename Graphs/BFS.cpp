/*
                                                                      BFS TRAVERSAL OF A GRAPH
                                                                ------------------------------------
SPACE COMPLEXITY: O(N+2E)


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vis[0]=1;
        queue<int> q;
        q.push(0); //zero-based

        vector<int> bfs;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it:adj[node]){
                if(vis[it]!=1){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};


*/