class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> res;

        int maxi = candies[0];

        // Find maximum
        for (int i = 1; i < candies.size(); i++) {
            if (candies[i] > maxi) {
                maxi = candies[i];
            }
        }

        // Check each child
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxi)
                res.push_back(true);
            else
                res.push_back(false);
        }

        return res;
    }
};
