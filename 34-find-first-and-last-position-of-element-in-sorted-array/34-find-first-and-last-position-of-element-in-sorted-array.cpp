class Solution {
private:
    int findOcc(vector<int> v,int target, int toggle){
        int start=0;
        int end=v.size()-1;
        int x=-1;
     
        int mid;
        vector<int> ans;
        while(start<=end){
             mid=start+(end-start)/2;
            if(v[mid]==target){
                x=mid;
                if(toggle==-1) {
                end=mid+toggle;
                }
                if(toggle==1){
                start=mid+toggle;
                }
            }
            else if(v[mid]>target){
                end=mid-1;
            }
            else start=mid+1;
}
        return x;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int firstOccurence=findOcc(nums,target,-1); //toggle is -1 for first occurence
        int lastOccurence=findOcc(nums,target,1);   //toggle is +1 for first occurence
        
        ans.push_back(firstOccurence);
        ans.push_back(lastOccurence);
         
        return ans;
        
    }
};