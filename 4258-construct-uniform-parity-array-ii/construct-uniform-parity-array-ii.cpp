class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        return ranges::min(nums1)&1 || ranges::count_if(nums1, [](int x){ return (x&1)==1;})==0;
    }
};