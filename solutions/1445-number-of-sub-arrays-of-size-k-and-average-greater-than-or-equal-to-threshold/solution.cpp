class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int count = 0;
        int check = threshold * k;

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        if (sum >= check) {
            count++;
        }

        for (int i = k; i < arr.size(); i++) {
            sum += arr[i];
            sum -= arr[i - k];

            if (sum >= check) {
                count++;
            }
        }

        return count;
    }
};
