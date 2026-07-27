class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int cor1 = coordinates[0] - 'a';
        int cor2 = coordinates[1] - '1';
        int sum = cor1+cor2;
        if(sum % 2 != 0){
            return true;
        }
        return false;
    }
};
