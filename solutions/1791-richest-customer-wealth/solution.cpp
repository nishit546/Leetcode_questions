class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int maximum = 0;
      for(auto customer : accounts){
        int sum = 0;
        for(int money : customer){
            sum += money;
        }
        maximum = max(maximum,sum);
      }
      return maximum;
    }
};
