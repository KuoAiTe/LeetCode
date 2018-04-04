class Solution {
public:
    static bool sortbysec(const vector<int> &a, const vector<int> &b){
        return (a[1] < b[1]);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int length = 0,currentB = -999;
        sort(pairs.begin(), pairs.end(), sortbysec);
        for (int i=0;i<pairs.size();i++)
            if(pairs[i][0] > currentB){
                currentB = pairs[i][1],length++;
                printf("length:%d %d\n",length,currentB);
            }
        return length;
    }
};
