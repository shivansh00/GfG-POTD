class Solution {
    vector<bool> vis;
    vector<int> list;
    void dfs(int node, vector<int> *adj) {
        list.push_back(node);
        vis[node]= true;
        for (int &e: adj[node])
            if (!vis[e])
                dfs(e, adj);
        return;
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vis.resize(V);
        dfs(0, adj);
        return list;
    }
};
