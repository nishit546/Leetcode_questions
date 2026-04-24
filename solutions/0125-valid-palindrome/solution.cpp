class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";
        
        for(char ch : s){
            if((ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9')){
                
                if(ch >= 'A' && ch <= 'Z'){
                    ch += 32; 
                }
                word += ch;
            }
        }

        int i = 0;
        int j = word.length() - 1;

        while(i < j){
            if(word[i] != word[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
