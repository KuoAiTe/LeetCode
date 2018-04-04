class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int slices = 0;
        int size = A.size();
        vector<int> table(size);
        for(int i=2;i<size;i++){
            if(A[i]-A[i-1] == A[i-1] - A[i-2])
                table[i] = table[i-1] +1;
            else
                table[i] = 0;
            slices+= table[i];
        }
        return slices;
    }
};
