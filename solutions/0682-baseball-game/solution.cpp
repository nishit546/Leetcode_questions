class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> res;
        for(string c : operations){
            if(c == "+"){
                int score = res[res.size()-1] + res[res.size()-2];
                res.push_back(score);
            }
            else if(c == "D"){
                int score = res[res.size()-1]*2;
                res.push_back(score);
            }
            else if(c == "C"){
                res.pop_back();
            }
            else{
                res.push_back(stoi(c));
            }
        }
        int sum = 0;
        for(int i : res){
            sum += i;
        }
        return sum;
    }
};
