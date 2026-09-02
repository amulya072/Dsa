class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> cnt;
        long long ans=0;
        for(int x : nums) {
            ans += cnt[x];
            ++cnt[x];

        }
        return (int)ans;
    }
};