class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],res=nums[0];
        if(nums.size()==1)
            return nums[0];
        for(int i=1;i<nums.size();i++){
            mx = max(nums[i],mx+nums[i]);
            res = max(mx,res);
           
            
        }
        return max(res,mx);
    }
};