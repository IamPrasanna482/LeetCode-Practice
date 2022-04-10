class Solution {
public:
    
    
    vector<int> invert(vector<int> &v){
        for(int i=0;i<v.size();i++){
            if(v[i]==1) v[i]=0;
            else v[i]=1;
        }
        return v;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for(int i=0;i<image[0].size();i++){
            vector<int> v=image[i];
            reverse(v.begin(),v.end());
            invert(v);
            ans.push_back(v);
        }
        return ans;
    }
};