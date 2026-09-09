class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {

        unordered_map<int, vector<int>> adj;

        for (auto &vec : adjacentPairs) {
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int start = 0;

        for (auto &p : adj) {
            if (p.second.size() == 1) {
                start = p.first;
                break;
            }
        }

        vector<int> ans;
        int prev = INT_MAX;
        int curr = start;

        while (true) {
            ans.push_back(curr);

            int next = INT_MAX;

            for (int neighbor : adj[curr]) {
                if (neighbor != prev) {
                    next = neighbor;
                    break;
                }
            }

            if (next == INT_MAX)
                break;

            prev = curr;
            curr = next;
        }

        return ans;
    }
};



