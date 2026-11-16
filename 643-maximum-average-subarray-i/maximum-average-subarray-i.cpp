class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double aver=0;
        double n= arr.size();
        double maxaver=INT_MIN;
        double sum=0;
        for(int i=0; i<k; i++){
           sum += arr[i];
        }
        aver=sum/k;
        maxaver= aver;
        for (int i=k; i<n; i++){
            sum = sum+arr[i]-arr[i-k];
            aver=sum/k;
        if (aver>maxaver){
            maxaver = aver;
        }
        } 
        return maxaver;
    }
};