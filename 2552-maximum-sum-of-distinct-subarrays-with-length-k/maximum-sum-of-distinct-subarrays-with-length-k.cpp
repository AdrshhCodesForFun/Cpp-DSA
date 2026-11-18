class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int ans=0;
        long long maxi=0;
        long long sum=0;
         unordered_map<int,int> mp;
        for(int i =0; i<k; i++){
            mp[arr[i]]++;
            sum+= arr[i];}

        if(mp.size()==k){
           int i=0;
            maxi = max(maxi,sum);
        }

        for(int i=k; i<n; i++){
            sum= sum+arr[i]-arr[i-k];
            mp[arr[i]]++;
             mp[arr[i-k]]--;
             if(mp[arr[i-k]] == 0){
                mp.erase(arr[i-k]);
            }

            if(mp.size()==k){
            maxi = max(sum,maxi);}
           
             
        }
        return maxi;
    }
};