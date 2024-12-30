class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // //sort(nums.begin(),nums.end());
        // for(int i=n-1;i>=0;i--){
        //     for(int j=0;j<=i;j++){
        //         if(nums[i]<nums[j]){
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }
        
        // int c_0 =0,c_1=0,c_2=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0) c_0++;
        //     else if(nums[i] == 1) c_1++;
        //     else c_2++;
        // }

        // for(int i=0;i<c_0;i++) nums[i]=0;
        // for(int i=c_0;i<c_0+ c_1;i++) nums[i]=1;
        // for(int i=c_0+c_1;i<n;i++) nums[i]=2;

        int low =0, mid=0, high=n-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
