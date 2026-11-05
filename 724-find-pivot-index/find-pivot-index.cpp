class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left =0;
        int right =0;
        int n = nums.size();
        int sum=0;

        for (int i =0;i<n; i++){
            sum+=nums[i];
        }
        
        
        for (int i = 0 ; i<n ; i++){
              
              if (i==0){
            right = sum - left - nums[i]; 
            if(left == right){
                return i;}}

               else{
            left += nums[i-1];
            right = sum - left - nums[i]; 
            if(left == right){
                return i;}
            }
        }
        return -1;
        
        
    }
};