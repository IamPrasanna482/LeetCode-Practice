class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // 1 -> from the end, find nums[i]<nums[i+1] (find index)
        int n=nums.size();
        int k,l;
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end()); 
            // if no break point is found(then reverse the whole array)
        }
        else{
            // 2-> find point i where a[k]<a[i]
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
        swap(nums[k],nums[l]);
        reverse(nums.begin()+k+1,nums.end());    
            
        }
        
  
    }
};