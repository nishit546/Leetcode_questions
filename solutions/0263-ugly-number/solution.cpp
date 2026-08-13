class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0){
            return false;
        }
        vector<int> fac = {2,3,5};
        for(int i =0;i<3;i++){
            while(n % fac[i] == 0){
               n /= fac[i];
            }
        }
        return n == 1;
    }
};
