class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int > mp;

        for (int i =0; i<s.size(); i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>> v;

        for (auto i :mp){
           v.push_back({i.first,i.second});
           }

        sort(v.begin(), v.end(), [] (auto &a,auto &b){
           return a.second>b.second;
         });

         string ans="";
        for(auto i:v){
            for(int j = 0; j < i.second; j++){
            ans.push_back(i.first);}
        } return ans;
    }
        
};