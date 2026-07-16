class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // yaha par variable sized sliding window use kiya hai
        set<char> freq;
        int left = 0;
        int right = 0;
        int maxLength =0;
        while(right < s.size()){
          while(freq.find(s[right])!=freq.end()){
            freq.erase(s[left]);
            left++;
          }
          freq.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
            right++;
        
    }
    return maxLength;
}
};
