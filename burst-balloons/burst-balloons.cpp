class Solution {
public:
    int maxCoins(vector<int>& nums) {
   int orig_size = nums.size();
		//bounds
        nums.insert(nums.begin(), 1);
        nums.insert(nums.end(), 1);
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));
        int len = 1;
        while(len <= orig_size){
            int i = 1;
            int end = i + len - 1;
			// widow size is len now move on...
            for(; end < (nums.size() - 1); i++, end++){
                for(int last = i; last <= end; last++){
                    int left_range_res = dp[i][last - 1];
                    int right_range_res = dp[last + 1][end];
                    int coins_in_last = nums[last];
                    int last_burst_score = nums[i - 1] * coins_in_last * nums[end + 1];
                    dp[i][end] = max(dp[i][end], left_range_res + last_burst_score + right_range_res);
                }
            }
	
            len++;
        }
        return dp[1][orig_size];
    }
};