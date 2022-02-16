class Solution {
private:
    int bs(vector<int> nums, int target, int start,int end){
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        //linear search
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target) return i;
        // }
        // return -1;
        
        //binary search
        // find the minimum element, then we know that the elements at the left and elements at the right are sorted
        //hence apply binary search to both the sorted arrays to find the target;
        //finding the index of minimum element
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=0;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[0]){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
            
        }
            
        int a=bs(nums,target,0,ans-1); //search in left
        if(a==-1){
            a=bs(nums,target,ans,n-1);
        }
        return a;
    }
};