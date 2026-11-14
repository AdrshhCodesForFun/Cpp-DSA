
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        vector<int> presum(n+1, 0);

        for(int i=0; i<n; i++){
            presum[i+1] = presum[i] + nums[i];
        }

        for(int i=0; i<n; i++){
            for(int len=l; len<=r; len++){
                if(i+len <= n){
                    int sum = presum[i+len] - presum[i];

                    if(sum > 0 && sum < ans){
                        ans = sum;
                    }
                }
            }
        }

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};
