class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> flip;
        for(vector<int> i : image){
            reverse(i.begin(),i.end());
            for(int j = 0;j < i.size();j++){
                if(i[j] == 0){
                    i[j] = 1;
                }
                else{
                    i[j] = 0;
                }
            }
            flip.push_back(i);
        }
        return flip;
    }
};
