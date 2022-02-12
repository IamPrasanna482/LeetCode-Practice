class Solution {
public:
    int findMin(vector<int>& nums) {
        //approch1 -> linear search(O(N))
        
        //approcah 2
        // bcoz the array is given sorted, we can use binary search
        
        //left rotated
        // the minimum element is equal to the number of times the array is rotated
//         int n=nums.size();
//         int low=0;
//         int high=n-1;
//         int ans;
//         while(low<=high){
//             int mid=low+(high-low)/2;
//             int prev=(mid+n-1)%n; //as it can be the first element also;
//             int next=(mid+1)%n;
//             //if(mid is the minimum element
//             if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
//                 ans=mid;
//                 break;
//             }
            
//             //we have to search in the unsorted array
//             if(nums[low]<=nums[mid]){
//                 //sorted array is the left one
//                 low=mid;
//             }
//             else if(nums[mid]<=nums[high]){
//                 //sorted array is the right array
//                 high=mid;
//             }
//         }
//         return nums[ans];
         int i,n=nums.size(),l,r,m,k=0;
        l=1,r=n-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]<nums[0]) k=m,r=m-1;
            else l=m+1;
        }
        return nums[k];
    }
};