class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
       
	int dp[n];
	dp[0] = arr[0];
	for(int i=1;i<n;i++){//max from left
		dp[i] = max(arr[i],dp[i-1]);
	}
	int val=0;
	for(int i=n-1;i>=0;i--){// max from left 
		val  = max(val,arr[i]);
		dp[i] = min(dp[i],val); // min of max from left n right at each i
	}
	val=0;
	for(int i=0;i<n;i++){
		val += dp[i] - arr[i];
	}
	return val;
    }
};