class Solution {
public:
    
    void findSubsets(int ind,vector<int> nums, vector<vector<int>> &ans, vector<int> ds){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        //pick
        ds.push_back(nums[ind]);
        findSubsets(ind+1,nums,ans,ds);
        
        //not pick
        ds.pop_back();
        findSubsets(ind+1,nums,ans,ds);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        findSubsets(0,nums,ans,ds);
        return ans;
    }
};