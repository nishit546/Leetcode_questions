class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> store;
        int count = 0;
        for(char ch : jewels){
            store.insert(ch);
        }
        for(char ch : stones){
            if(store.count(ch)){
                count++;
            }
        }
        return count;
    }
};
