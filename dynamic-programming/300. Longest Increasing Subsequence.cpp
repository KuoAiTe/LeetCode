class Solution {
public:
    vector<vector<int>> table;
    int lengthOfLIS(vector<int>& nums) {
        int size= nums.size(),lastValue=-11111;
        table.resize(size+1,vector<int>(size+1,0));
        vector<int> s = vector<int>(nums);
        sort(s.begin(),s.end());
        for(int i=1;i<=size;i++)
            for(int j=1;j<=size;j++)
                if(nums[i-1]==s[j-1] && lastValue != nums[i-1])
                    table[i][j] = table[i-1][j-1] + 1,lastValue = nums[i-1];
                else
                    table[i][j] = max(table[i-1][j], table[i][j-1]);

        return table[size][size];
    }

};
