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

        for (int j = n - 1; j >= 0; j--) {

            if (s[j] == ' ') {

                if (!temp.empty()) {

                    temp = reverse(temp);

                    if (!ans.empty()) {
                        ans.push_back(' ');
                    }

                    ans.append(temp);
                    temp.clear();
                }
            } else {
                temp.push_back(s[j]);
            }
        }

        // Process the first word
        if (!temp.empty()) {

            temp = reverse(temp);

            if (!ans.empty()) {
                ans.push_back(' ');
            }

            ans.append(temp);
        }

        return ans;
    }
};