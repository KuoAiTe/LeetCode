class Solution {
public:
    int *table;
    int countNumbersWithUniqueDigits(int n) {
        table = new int[n+1];
        table[0] = 1;
        table[1] = 10;
        for(int i=2;i<=n;i++){
            int uniqueDigits = 9;
            for(int j=0;j<i-1;j++)
                uniqueDigits *= (9-j);
            table[i] = table[i-1] + uniqueDigits;
        }
        return table[n];
    }
};
