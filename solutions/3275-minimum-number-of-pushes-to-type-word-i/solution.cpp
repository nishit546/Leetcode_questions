class Solution {
public:
    int minimumPushes(string word) {
     int n = word.length();
     int res = 0;
     int cost = 1;
     while(n > 0){
        int take = min(8,n);
        res += take * cost;
        n -= take;
        cost++;
     }
     return res;
    }
};
