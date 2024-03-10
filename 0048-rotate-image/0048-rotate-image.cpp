class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sz=matrix.size();
       for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
       }
      // int n=0;
       for (int i = 0; i < sz; i++) {
            int start = 0;
            int end = sz - 1;

            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};