class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>> v(m,vector<int>(n,0));
        
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                int newVal= ((r*n+c)+k)%(m*n);
                int newr=newVal/n;
                int newc=newVal%n;
                v[newr][newc]=grid[r][c];
            }
        }
        
        return v;
        
    }
};