class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =nums[0];
        int tempSum =nums[0];
         for(int i = 1 ; i<nums.size();i++){
            if(tempSum<0){
                tempSum = 0;
            }

            tempSum += nums[i];

            maxSum = max(tempSum, maxSum);
         } 
         return maxSum;
    }
};
