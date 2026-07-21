class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum += cardPoints[i];
        }
        int maxSum = sum;
        int idx = cardPoints.size()-1;
        for(int i = k-1;i>=0;i--){
            sum -= cardPoints[i];
            sum += cardPoints[idx];
            --idx;
            maxSum = max(maxSum,sum);
        }
        
        return maxSum;
    }
};
