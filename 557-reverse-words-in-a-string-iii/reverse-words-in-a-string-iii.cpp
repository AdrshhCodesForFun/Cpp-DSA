
class Solution {

    string reverse(string temp) {
        int i = 0;
        int j = temp.length() - 1;
        while (i < j) {
            swap(temp[i], temp[j]);
            i++;
            j--;
        }
        return temp;
    }

public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        string ans = "";

        for (int i = 0; i <= n; i++) {
            if (i == n){
                temp = reverse(temp);
                ans.append(temp);
                temp.clear();
            } else if (s[i] == ' ') {
                temp = reverse(temp);
                ans.append(temp + " ");
                temp.clear();
            } else {
                temp.push_back(s[i]);
            }
        }
        return ans;
    }
};