
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());

        long long sum = 0;

        for (int x : nums) {
            sum += x;
        }

        return (long long)nums.size() * maxi - sum;
    }
};
