class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxcount=0;
  int count =0;
   for (int i = 0; i<arr.size(); i++){
      if (arr[i]==1){
        count++;
        if(count > maxcount){
        maxcount = count;
      }
      }else{
        count=0;
      }
   } return maxcount;
    }
};