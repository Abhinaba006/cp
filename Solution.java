import java.util.*;
class Solution {
    public int[] sortedSquares(int[] nums) {
        int ans[]=new int[nums.length], l=0, r=nums.length-1, i=0;
        while(l<=r){
            if(nums[r]>=nums[l]){
                ans[i++]=nums[r--];
            }else{
                ans[i++]=nums[l++];
            }
        }
        // reverse
        Arrays.reverse(ans);
        
        return ans;
    }
}