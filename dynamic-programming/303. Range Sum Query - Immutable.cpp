class NumArray {
public:
    int* table;
    NumArray(vector<int> nums) {
        int size = nums.size();
        if(size > 0){
            table = new int[size];
            table[0] = nums[0];
            for(int i=1;i<size;i++){
                table[i] = table[i-1] + nums[i];
                printf("table[%d] = %d\n",i,table[i]);
            }
        }
    }

    int sumRange(int i, int j) {
        return table[j]-table[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
