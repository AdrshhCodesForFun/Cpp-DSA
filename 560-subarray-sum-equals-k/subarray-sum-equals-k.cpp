class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int ans =0;
       unordered_map<int,int> mp;
       mp[0]=1;
       int n= nums.size();
       int sum=0;
       int result =0;

       for(int i =0; i<n; i++){
          sum +=nums[i];
          int ques=sum-k;
           result += mp[ques];
           mp[sum]++;
       }
       return result;
    }
};