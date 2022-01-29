class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //approach 1-> uses O(nlogn)
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-k];
        
        
        //approch 2-> using minheaep(priority queue)
        priority_queue  < int >  pq;
        for(auto it:nums){
            pq.push(it);
        }
        
          int ans=0;
        
          for(int i=0; i<k; i++){
              
             auto temp= pq.top();
              ans= temp;
              pq.pop();
          }
        
          return ans;
    }
};