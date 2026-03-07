class Solution {
    public int addedInteger(int[] nums1, int[] nums2) {
        for(int i = 0;i<nums1.length;i++){
            for(int j = i+1;j<nums1.length;j++){
                if(nums1[i] > nums1[j]){

                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
                }
            }

        }
         for(int i = 0;i<nums2.length;i++){
            for(int j = i+1;j<nums2.length;j++){
                if(nums2[i] > nums2[j]){

                int temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
                }
            }

        }
        return nums2[0] - nums1[0];
    }
}
