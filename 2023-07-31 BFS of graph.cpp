class Solution {
    vector<bool> vis;
    vector<int> list;
    queue<int> q;
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vis.resize(V);
        q.push(0);
        vis[0]= true;
        while (!q.empty()) {
            int node= q.front();
            list.push_back(node);
            q.pop();
            for (int &e: adj[node])
                if (!vis[e]) {
                    q.push(e);
                    vis[e]= true;
                }
        }
        return list;
    }
};
