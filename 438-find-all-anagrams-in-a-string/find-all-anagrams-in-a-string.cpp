class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> a ; 
        unordered_map<char,int> b;
        int n = s.size();
        int m = p.size();
        if(m > n) return ans;
        for (int i =0; i<m; i++){
            b[p[i]]++;
        }
        for (int i =0; i<m; i++){
            a[s[i]]++;
        }
        int i=0;
        if (a==b){
              ans.push_back(i);
            }
        for(int i=m; i<n; i++){
            a[s[i-m]]--;
            if(a[s[i-m]]==0){
                a.erase(s[i-m]);
            }
            a[s[i]]++;
             if (a==b){
              ans.push_back(i-m+1);
            }
        }return ans;
    }
};