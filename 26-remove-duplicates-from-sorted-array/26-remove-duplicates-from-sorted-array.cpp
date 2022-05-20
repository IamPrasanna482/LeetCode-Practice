class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int cnt=0;
//         int l=1,r=1;
//         for(;r<nums.size();r++){
//             if(nums[r]!=nums[r-1]){
//                 nums[l++]=nums[r];
//                 // cnt++;
//             }
           
//         }
//         return l;
        
        // set<int> s;
        // for(auto &it:s){
        //     s.insert(it);
        // }
        // nums.clear();
        // for(auto &it:s) nums.push_back(it);
        // return s.size();
        set<int> s;
        for(auto it: nums)
            s.insert(it);
        nums.clear();
        for(auto it: s)
			nums.push_back(it);
        return s.size();
    }
};