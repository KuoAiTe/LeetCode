class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], currentSum=0;
        int size = nums.size();
        for(int i=0;i<size;i++){
            currentSum = currentSum + nums[i];
            if ( currentSum > maxSum ) maxSum = currentSum;
            if ( currentSum < 0 ) currentSum = 0;
        }
        return maxSum;
    }
};
