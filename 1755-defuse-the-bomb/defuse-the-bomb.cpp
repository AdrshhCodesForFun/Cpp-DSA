class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans;
        int sum = 0;

        if(k == 0){
            return vector<int>(n, 0);
        }

        for(int i = 0; i < n; i++){
            code.push_back(code[i]);
        }

        if(k > 0){

            for(int i = 1; i <= k; i++){
                sum += code[i];
            }
            ans.push_back(sum);

            for(int i = 2; i <= n; i++){
                sum = sum + code[i+k-1] - code[i-1];
                ans.push_back(sum);
            }
        }
        else{
            k = -k;

            for(int i = n-k; i < n; i++){
                sum += code[i];
            }
            ans.push_back(sum);

            for(int i = 1; i < n; i++){
                sum = sum + code[n+i-1] - code[n+i-k-1];
                ans.push_back(sum);
            }
        }

        return ans;
    }
};
