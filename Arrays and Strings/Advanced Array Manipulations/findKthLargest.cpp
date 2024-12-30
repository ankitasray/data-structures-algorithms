class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int idx=nums.size()-k;

        return solve(nums, 0,nums.size()-1,idx);
    }

    int solve(vector<int>&nums, int l,int r, int i){
        if(l==r){
            return nums[l];
        }
        int pivot= nums[l];
        int low=l;
        int high=r;

        while(low<= high){
            while(low<=high && nums[low]<pivot){
                low++;
            }
            while(low<=high && nums[high]>pivot){
                high--;
            }
            if(low<=high){
                swap(nums[low],nums[high]);
                low++;
                high--;
            }
        }
        if(i<=high){
            return solve(nums,l,high,i);
        }else if(i>=low){
            return solve(nums,low,r,i);
        }else{
            return nums[i];
        }
    }
};
