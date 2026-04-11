class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                temp += s[i];
            } else {
                if(!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
        }

        if(!temp.empty()) {
            words.push_back(temp);
        }

        string result = "";
        for(int i = words.size() - 1; i >= 0; i--) {
            result += words[i];
            if(i != 0) result += " ";
        }

        return result;
    }
};
