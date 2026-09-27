class Solution {
public:

    void dfs (vector<vector<int>>& graph, int start,vector<bool> &visited){
        stack<int> nodes;
        nodes.push(start);
        visited[start] = true;

        while(!nodes.empty()){
            int current = nodes.top();
            nodes.pop();
            for(int i=0; i<graph[current].size(); i++){
                int neighbour = graph[current][i];
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    nodes.push(neighbour);
                }
            }
        }
    }


    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        int components=0;
        //contruct a graph
        for (int i = 0; i<edges.size(); i++){
            int first = edges[i][0];
            int second = edges[i][1];

            graph[first].push_back(second);
            graph[second].push_back(first);
        }

        vector<bool> visited (n,false);

        for (int i = 0; i<n; i++){
            if(!visited[i]){
                components++;
                dfs(graph, i, visited);
            }
        }
        return components;
    }
};
