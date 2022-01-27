class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map <int,int> mpp;
        int n=nums.size();
        for(auto it:nums){
            mpp[it]++;
        }
        
        vector<int> v;
        for(auto it:nums){
        if(mpp[it]==1 && !mpp[it-1]  && !mpp[it+1]){
                v.push_back(it);
            }
        }
        return v;
    }
};