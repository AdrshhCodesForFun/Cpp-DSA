class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int ans=arr[0];
       for (int i=1; i<arr.size(); i++) {
         ans =  arr[i] ^ ans;
       }return ans;
    }
};