#include <iostream>
using namespace std;

/* ADJACENCY MATRIX  ----> Space Complexity: O(2N)
int main(){
    int n,m;  // n--> no. of vertices, m--> no. of edges
    cin>>n>>m;
    //storing the graph in the form of adjacency matrix
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v; // u--> source node, v--> destination node
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}
*/

/* VECTOR LIST  ----> Space Complexity: O(2E)  E--> no. of edges
int main(){
    int n,m;  // n--> no. of vertices, m--> no. of edges
    cin>>n>>m;
    //storing the graph in the form of adjacency list
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v; // u--> source node, v--> destination node
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
*/