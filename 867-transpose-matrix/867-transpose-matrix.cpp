class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if( i<j) swap(matrix[i][j],matrix[j][i]);
        //     }
        // }
        // return matrix;
        
        int n=matrix.size();    //row
        int m=matrix[0].size(); //columns
        
        vector<vector<int>> ans(m,vector<int>(n));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};