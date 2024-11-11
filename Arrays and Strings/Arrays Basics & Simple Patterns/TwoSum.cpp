class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i == j) continue;
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        //---------
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
                
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        //--------------------
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int a= nums[i];
            int b=target-a;
            if(mpp.find(b)!= mpp.end()){
                return {i,mpp[b]};
            }
            mpp[a]=i;
        }
        return {};
    }
};
