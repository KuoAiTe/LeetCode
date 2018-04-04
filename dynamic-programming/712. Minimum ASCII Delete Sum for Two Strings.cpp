class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.size(), n =s2.size();
        vector< vector<int> > table(m+1, vector<int>(n+1, 0));
        for(int i=1;i<m;i++)
            table[i][0] = table[i-1][0] + s1[i-1];
        for(int j=1;j<n;j++)
            table[0][j] = table[0][j-1] + s2[j-1];

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1])
                    table[i][j] = table[i-1][j-1];
                else
                    table[i][j] = min(table[i-1][j] + s1[i-1],table[i][j-1] + s2[j-1]);
            }
        return table[m][n];
    }
};
