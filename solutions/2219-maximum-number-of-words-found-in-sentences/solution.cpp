class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;
        for(string s : sentences){
            int count = 0;
            for(char ch : s){
                if(ch == ' '){
                    count++;
                }
            }
            maximum = max(maximum,count+1);
        }
        return maximum;
    }
};
