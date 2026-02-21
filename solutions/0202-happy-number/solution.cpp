class Solution {
public:
int sum(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }
    return sum;
}
    bool isHappy(int n) {
        if (n == 1){

            return true;
        }
        n = sum(n);
        if(n == 1){
            return true;
        }
        while(n != 4 && n!= 1){
            n = sum(n);
        }
        if(n == 4){
            return false;
        }
        if(n == 1){
            return true;
        }
        return false;
    }
};
