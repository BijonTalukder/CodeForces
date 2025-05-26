#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<vector<int>> graph(n);
        vector<int> indegree(n, 0);

        // Step 1: Build graph and in-degree array
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }

        // Step 2: Color frequency tracker (n x 26 matrix)
        vector<vector<int>> colorCount(n, vector<int>(26, 0));
        queue<int> q;

        // Step 3: Start with nodes that have 0 in-degree
        for (int i = 0; i < n; ++i) {
            if (indegree[i] == 0)
                q.push(i);
        }

        int visited = 0, maxColorValue = 0;

        // Step 4: Kahn's Algorithm (BFS Topo Sort)
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            visited++;

            // Update color count of current node
            int colorIndex = colors[node] - 'a';
            colorCount[node][colorIndex]++;
            maxColorValue = max(maxColorValue, colorCount[node][colorIndex]);

            for (int neighbor : graph[node]) {
                // Update neighbor's color count
                for (int c = 0; c < 26; ++c) {
                    colorCount[neighbor][c] = max(colorCount[neighbor][c], colorCount[node][c]);
                }

                indegree[neighbor]--;
                if (indegree[neighbor] == 0)
                    q.push(neighbor);
            }
        }

        // Step 5: If some nodes weren’t visited => Cycle exists
        return (visited == n) ? maxColorValue : -1;
    }
};
int main() {
    Solution sol;
    string colors = "abaca";
    vector<vector<int>> edges = {{0,1}, {0,2}, {2,3}, {3,4}};
    cout << sol.largestPathValue(colors, edges) << endl;
    return 0;
}
