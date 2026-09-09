class Solution {
public:
    int reverseNum(int n){
        int rev =0;

        while (n > 0){
            rev = rev * 10 + n % 10;
              n/=10;
        }
        return rev;

       }
      int countNicePairs(vector<int>& nums) {
        const int MOD = 1e9 +7;

        unordered_map<int, long long > mp;
        long long ans = 0;
        for (int num : nums ){
            int key = num - reverseNum(num);
            ans = (ans + mp [key])% MOD;
             mp[key]++;
        } 
        return ans;
      }
        
};