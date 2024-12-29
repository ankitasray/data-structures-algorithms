//using cyclic sort
287. Find the Duplicate Number (Medium)
Link: https://leetcode.com/problems/find-the-duplicate-number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.
  
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]!= i+1){
                int curr=nums[i]-1;
                if(nums[i]!=nums[curr]){
                    swap(nums[i],nums[curr]);
                }else{
                return nums[i];
                }
            }else{
                i++;
            }
        }
        return -1;
    }
};
