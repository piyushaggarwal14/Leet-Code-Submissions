class Solution {
public:
    bool isPalindrome(string s) {
        string n="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                n+=s[i]+32;
            }else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                n+=s[i];
            }
        }
        int start = 0;
        int end = n.length()-1;

        while(start<=end){
            if(n[start]==n[end]){
                start++;
                end--;
            }else{
            return false;
            }
        }
        return true;
    }
};