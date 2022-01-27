class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        // approach 1-> taking two vectors
//         vector<int> pos;
//         vector<int> neg;
//         vector<int> ans;
//         for(auto &it:nums){
//             if(it>0) pos.push_back(it);
//             else neg.push_back(it);
//         }
//         //  pos ->   3  1  2
//         //  neg ->  -2 -5 -4
        
//         for(int i=0;i<nums.size()/2;i++){
//             ans.push_back(pos[i]);
//             ans.push_back(neg[i]);
//         }
//         return ans;
        
        // approach 2-> 2 pointers
        // positive numbers on odd index
        // negative numbers on even index;
        
        int n=nums.size();
        vector<int> ans(n,0);
        int even=0;
        int odd=1;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) {
                ans[even]=nums[i];
                even+=2;
            }
                else {
                    ans[odd]=(nums[i]);
                    odd+=2;
        }
        }
        return ans;
        
    }
};