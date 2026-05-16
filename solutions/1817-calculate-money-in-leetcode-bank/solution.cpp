class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int myBal = 1;
        for(int i = 1;i<=n;i++){
            total += myBal + (i-1) % 7;
            if(i % 7 == 0){
                myBal++;
            }
        }
        return total;
    }
};
