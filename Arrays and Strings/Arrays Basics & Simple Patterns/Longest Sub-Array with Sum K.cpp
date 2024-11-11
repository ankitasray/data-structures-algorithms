class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int left = 0; int right = 0;
            long long sum = arr[0];
            int maxLen = 0;
            int n = arr.size();
            while(right < n){
                while(left <= right && sum>k){
                    sum -= arr[left];
                    left++;
                }
                if(sum==k){
                    maxLen = max(maxLen,right - left + 1);
                }
                right++;
                sum += arr[right];
            }
        return maxLen;
    }
};
