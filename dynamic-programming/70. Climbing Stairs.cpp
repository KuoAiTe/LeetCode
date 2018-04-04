class Solution {
public:
    int *table;
    int climbStairs(int n) {
        table = new int[n+1];
        memset(table,0,(n+1) * sizeof(int));
        table[1] = 1;
        table[2] = 2;
        int ways = climb(n);
        return ways;
    }
    int climb(int n){
        if (table[n] != 0) return table[n];
        else return table[n] = climb(n-1) + climb(n-2);
    }
};
