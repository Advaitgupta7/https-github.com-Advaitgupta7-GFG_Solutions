class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int>aa;
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<m;i++){
            aa.push_back(mat[0][i]);
        }
        for (int i = 1; i < n; i++) {
            aa.push_back(mat[i][m - 1]);
        }
        if (n > 1) {
            for (int j = m - 2; j >= 0; j--) {
                aa.push_back(mat[n - 1][j]);
            }
        }
        if (m > 1) {
            for (int i = n - 2; i > 0; i--) {
                aa.push_back(mat[i][0]);
            }
        }
        return aa;
    }
};
