class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int i;
      for(int k = 1;k<=arr.size();k+=2){
        int windowSum = 0;
        for(i = 0;i<k;i++){
            windowSum += arr[i];
        }
        sum += windowSum;
        for(int j = k;j<arr.size();j++){
            windowSum += arr[j];
            windowSum -= arr[j-k];
            sum += windowSum;

        }
      }  
      return sum;
    }
};
