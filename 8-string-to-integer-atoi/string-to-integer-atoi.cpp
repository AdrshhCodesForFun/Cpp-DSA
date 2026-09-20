class Solution {
bool isvalid(char ch){
    if (ch>='0' && ch <='9'){
        return true;
    } return false;
}
public:
    int myAtoi(string s) {
        int ans =0 ;
        bool negative = 0;
        bool started=0;
        bool signSeen = false;
       for (int i =0; i<s.size(); i++){
        if(!started && !signSeen && s[i]==' '){

        }
       else if(!started && !signSeen &&(s[i] == '+' || s[i] == '-')){
        signSeen=1;
        if(s[i] == '-')
        negative = true;
}
        else if (isvalid(s[i])){
            if(ans > INT_MAX / 10 ||
                 (ans == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) {
             if(negative)
             { return INT_MIN;}
             else{return INT_MAX;}
               break;
            }
            ans = ans * 10 +(s[i]-'0');
            
            started=1;
        }else{break;}
       } if (negative){
        return -ans;
       }return ans;
    }
};