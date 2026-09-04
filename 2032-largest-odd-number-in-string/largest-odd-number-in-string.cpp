class Solution {
public:
    string largestOddNumber(string num) {
        int j= num.length()-1;
        string temp= "";
        for (j; j>=0; j--){
           if ((num[j]-'0') % 2 ==0){
            
           }else{
            for(int i=0; i<=j; i++){
            temp.push_back(num[i]);}
            break;
           }
        }return temp;
    }
};