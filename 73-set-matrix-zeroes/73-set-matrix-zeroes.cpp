class Solution {
public:
    void fix(vector<vector<int>> &matrix, int r, int c, int n,int m){
        //setting columns of that row 0
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[r][j]!=0)
                      matrix[r][j]=-1;
            }
            //setting rows of that column 0
         for(int i=0;i<matrix.size();i++)
            {
                if(matrix[i][c]!=0)
                    matrix[i][c]=-1;
            }
        
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0){
//                     fix(matrix,i,j,n,m);
//                 }
//             }
//         }
        
//      for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
        //second approach (using dummy arrays)
        vector<int> r_arr(n,-1);
        vector<int> c_arr(m,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    r_arr[i]=0;
                    c_arr[j]=0;
                }
            }
        }
//         for(int i=0;i<n;i++) cout<<r_arr[i]<<" ";
//         cout<<endl;
//         for(int i=0;i<m;i++) cout<<c_arr[i]<<" ";
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    //  index_pair -> (i,j)
                    // in the dummy arrays, if any index_pair corresponding is 0, mark that                         element as 0
                    if(r_arr[i]==0 || c_arr[j]==0){
                        matrix[i][j]=0;
                    }
            }
        }
        
    }
};