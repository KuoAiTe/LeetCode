class Solution {
public:
    int rob(vector<int>& nums) {
        int maxMoney = 0, size = nums.size();
        int *money = new int[size];
        memset(money,0,(size) * sizeof(int));
        if(size > 0){
            money[0] = nums[0];
            money[1] = max(nums[0],nums[1]);
            for (int i=2;i<size;i++)
                money[i] = max(money[i-2] + nums[i], money[i-1]);
            return money[size-1];
        }
        return 0;

    }
};
