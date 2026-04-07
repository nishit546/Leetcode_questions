public class Solution {
    public int MajorityElement(int[] nums) {
int dig = 0;
int count = 0;
for(int i = 0;i<nums.Length;i++){
    if(count == 0){
        dig = nums[i];
    }
    if(dig == nums[i]){
        count++;
    }
    else{
        count--;
    }
}
return dig;
    }
}
