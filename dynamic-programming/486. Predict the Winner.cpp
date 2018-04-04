class Solution {
public:
    vector<vector<int>> table;
    bool PredictTheWinner(vector<int>& nums) {
        int size= nums.size();
        table.resize(size,vector<int>(size,0));
        return minmax(nums,0,size-1) >=0;
    }
    int minmax(vector<int>& nums,int start,int end){
        if(table[start][end])
            return table[start][end];
        if(start==end)
            return nums[start];
        int left = nums[start] - minmax(nums,start+1,end);
        int right = nums[end] - minmax(nums,start,end-1);
        int profit = max(left,right);
        return table[start][end] = profit;
    }
};
