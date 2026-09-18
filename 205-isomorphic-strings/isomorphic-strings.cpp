class Solution {
public:
    bool check(string s, string t) {
        
        unordered_map<char , char> mp;

        if (s.length() != t.length()){
            return false;
        }
        for (int i =0; i<s.length(); i++){

            if (mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
            }
            else{
               if ( mp[s[i]] != t[i])
                {return false;}
            }
        } return true;
    }
    bool isIsomorphic(string s ,string t){
        bool a = check(s,t);
        bool b = check(t,s);
        return a && b;
    }
};  