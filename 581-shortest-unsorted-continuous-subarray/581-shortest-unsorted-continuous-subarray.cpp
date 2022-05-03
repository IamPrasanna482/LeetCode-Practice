class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        // sort the nums array and find the first and last mismatched elements
        
        int i=0;
        int j=nums.size()-1;
        
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        
        while(i<j){
            if(nums[i]==v[i] && nums[j]==v[j]){
                i++,j--;
                continue;
            }
            if(nums[i]==v[i]){
                
             i++;
            continue;
            }
                if(nums[j]==v[j]){
                    
                j--;
                continue;
                }
            if(nums[i]!=v[i] && nums[j]!=v[j]) break;
        }
       
  if(i==j)return 0;
  
  return j-i+1;
    }
};