class Solution {
public:
    string removeDuplicates(string s) {
       string temp = "";
       int i=0;
       temp.push_back(s[i]);
       i++;

       while ( s.length() !=0 && i<s.length()){
       
         if (!temp.empty() && temp.back() == s[i]){
            temp.pop_back();
            i++;
        }else{
        temp.push_back(s[i]);
        i++;}

       }return temp;
    }
};