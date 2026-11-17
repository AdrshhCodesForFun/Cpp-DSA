class Solution {
public:
    vector<int> getAverages(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int> ans;
        int average=0;
        long long sum=0;
          
          if (2*k+1>n){
             for (int i = 0; i < n; i++){
            ans.push_back(-1);}
            return ans;
          }
          if (k==0)
            {    ans=arr;
                return ans;
            }
          
        for(int i=0; i<k; i++){
            ans.push_back(-1);
        }
        for(int i =0; i<2*k+1; i++ ){
            sum += arr[i];
        }average= sum/(2*k+1);
        ans.push_back(average);

        for (int i =k+1; i <n-k; i++){
            sum=sum+arr[i+k]-arr[i-k-1];
            average=sum/(2*k+1);
            ans.push_back(average);
        }
         for (int i = 0; i < k; i++) {
            ans.push_back(-1);
        }
        return ans;
    }
};