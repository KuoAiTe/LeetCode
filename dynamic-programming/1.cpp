class Solution {
public:
    int *table;
    int integerBreak(int n) {
        table= new int[n+1];
        memset(table,0,(n+1) * sizeof(int));
        table[1] = 0;
        table[2] = 1;
        return findMaxProduct(n);
    }
    int findMaxProduct(int n){
        if(table[n]!=0)
            return table[n];
        for(int i=1;i<n;i++)
            table[n] = max(table[n], max(i*(n-i),i * findMaxProduct(n-i)));
        return table[n];
    }
};
