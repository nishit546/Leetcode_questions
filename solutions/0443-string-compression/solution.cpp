class Solution {
public:
    int compress(vector<char>& chars) {
     string res(chars.begin(),chars.end());
     chars.clear();
     int count = 1;
     for(int i = 1;i<=res.size();i++){
        if(res[i] == res[i-1]){
            count++;
        }
        else{
            chars.push_back(res[i-1]);
            if(count > 1){
                string cnt = to_string(count);
                for(char c : cnt){
                    chars.push_back(c);
                }
        count = 1;

            }
        }
     }
     return chars.size();
    }
};
