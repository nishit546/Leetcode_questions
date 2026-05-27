class Solution {
public:
    int passwordStrength(string password) {
        set<char> small;
        set<char> upper;
        set<char> dig;
        set<char> special;
        for(char ch : password){
            if(ch >= 'a' && ch <= 'z'){
                small.insert(ch);
            }
            else if(ch >= 'A' && ch <= 'Z'){
                upper.insert(ch);
            }
            else if(ch >= '0' && ch <= '9'){
                dig.insert(ch);
            }
            else{
                special.insert(ch);
            }
        }
        return small.size() + upper.size() * 2 + dig.size() * 3 + special.size() * 5;
    }
};
