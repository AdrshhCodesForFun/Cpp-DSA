char tolowercase(char ch ){
    if (ch >= 'a' && ch <= 'z'|| ch >= '0' && ch<= '9'){
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
bool checkpalindrome(string a){

    int s = 0 ; int e = a.size()-1;
    while (s<e){
      if (a[s] != a[e]){
        return 0;
      } else{s++;
      e--;}

    }return 1;
}

class Solution {
public:
    bool isPalindrome(string s) {
           string temp = "";

    for ( int j =0 ; j < s.size(); j++){
        if ( valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    for (int j =0; j< temp.size(); j++ ){

        temp[j]= tolowercase(temp[j]);
    }
    return checkpalindrome(temp);
        }
   
};