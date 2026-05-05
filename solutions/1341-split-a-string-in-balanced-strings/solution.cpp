class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balancedStr = 0;
        for(int i = 0;i < s.length();i++){
            if(s[i] == 'L'){
                balancedStr++;
            }
            else{
                balancedStr--;
            }
            if(balancedStr == 0){
                count++;
            }

        }
        return count;
    }
};
