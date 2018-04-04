#define INT_MAX 2100000000
class Solution {
public:
    vector<int> table;
    int numSquares(int n) {
        table.resize(n+1,INT_MAX);
        table[0] = 0;
        return findSquare(n);
    }
    int findSquare(int n){
        if(table[n] != INT_MAX)
            return table[n];
        for(int i=1;i*i<=n;i++)
            table[n] = min(table[n],findSquare(n-i*i) +1);
        return table[n];
    }
};
