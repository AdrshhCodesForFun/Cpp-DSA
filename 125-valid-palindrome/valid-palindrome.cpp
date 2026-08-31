char tolowercase(char ch ){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        return ch - 'A'+'a';
    }
}

bool valid (char ch){

    if ((ch >= 'a'&& ch <='z')||
         (ch >= 'A'&& ch <='Z')||
          (ch >= '0'&& ch <='9')){
              return true; 
    }return false;
}

class Solution {
public:
    bool isPalindrome(string s) {
         int i =0; int j = s.length()-1;
    while (i <= j){
        if (!valid(s[i])){
            i++;
        }
        else if (!valid(s[j])){
            j--;
        }
        else {
            if (tolowercase(s[i])!= tolowercase(s[j])){
              return false;
            } i++; j--;

        }
    }return true;
    }
};