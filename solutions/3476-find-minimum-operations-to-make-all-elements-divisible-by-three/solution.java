class Solution {
    public int minimumOperations(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }

        int operations = 0;

        for (int num : nums) {
            if (num % 3 != 0) {
                operations++;   
            }
        }

        return operations;
    }
}

