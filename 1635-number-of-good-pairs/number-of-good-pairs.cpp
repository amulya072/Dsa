class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int& num : nums) {
            mp[num]++;
        }

        int result = 0;

        for (auto& p : mp) {
            int freq = p.second;
            result += freq * (freq - 1) / 2;
        }

        return result;
    }
};