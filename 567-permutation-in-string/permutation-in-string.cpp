class Solution {
public:
    bool checkInclusion(string s, string p) {
         vector<int> ans;
        unordered_map<char, int> a ; 
        unordered_map<char,int> b;
        int m = s.size();
        int n = p.size();
        if(m > n) return false;
        for (int i =0; i<m; i++){
            b[s[i]]++;
        }
        for (int i =0; i<m; i++){
            a[p[i]]++;
        }
        int i=0;
        if (a==b){
              return true;
            }
        for(int i=m; i<n; i++){
            a[p[i-m]]--;
            if(a[p[i-m]]==0){
                a.erase(p[i-m]);
            }
            a[p[i]]++;
             if (a==b){
              return true;
            }
    }return false;
    }
};