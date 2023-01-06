//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Note that you must do this in-place without making a copy of the array.



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int fast = 0, slow = 0;
        for(; fast < nums.size(); fast++){
            if(nums[fast]){
                nums[slow++] = nums[fast];
            }
        }
        
        for(; slow < nums.size(); slow++){
            nums[slow] = 0;
        }
    }
};
