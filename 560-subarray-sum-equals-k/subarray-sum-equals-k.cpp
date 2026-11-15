class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
       unordered_map<int ,int > mp;
        int n= arr.size();
        mp[0]=1;
        int ans=0;
        vector<int> presum(n+1,0);
        
        for (int i =0; i<n ; i++){
            presum[i+1]= presum[i]+arr[i];
            
            if(mp.find(presum[i+1]-k) != mp.end()){
                ans +=mp[presum[i+1]-k];
            }
        
             
                 mp[presum[i+1]]++;
             
         
        }
        return ans;
    }
};