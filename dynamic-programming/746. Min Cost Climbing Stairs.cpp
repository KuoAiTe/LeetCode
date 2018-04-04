class Solution {
public:
    int c[1002]={0};
    int minCostClimbingStairs(vector<int>& cost) {
        int top = cost.size();
        for(int i=0;i<=top;i++)
            c[i] = 0;
        for(int i=2;i<=top;i++)
            c[i] = min(c[i-1]+cost[i-1],c[i-2]+cost[i-2]);
        int minimumCost = c[top];
        return minimumCost;
    }
};
