class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 1,0,3,2,12
        // 1,0,0,3,12
        // 1,3,0,0,12
        
        if(nums.size()==1){
            return;
        }
        
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[c]=nums[i];
                c++;
            }
        }
        for(int i=c;i<nums.size();i++){
            nums[i]=0;
        }
    }
};