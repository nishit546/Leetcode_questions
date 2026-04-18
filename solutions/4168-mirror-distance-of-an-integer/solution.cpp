class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int dig = 0;
         int reverse = 0;
        while(temp > 0){
            dig = temp  % 10;
            reverse = reverse * 10 + dig;
            temp = temp / 10;
        }
        return abs(n-reverse);
    }
};
