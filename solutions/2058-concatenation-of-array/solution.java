class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int[] result = new int[2*n];   // because in question we are asked to make 2 size array
        for(int i = 0;i<n;i++){
           result[i] = nums[i];   // pehle half ke liye
           result[i + n] = nums[i]; // dusre half ke liye
        }
        return result;
    }
}
