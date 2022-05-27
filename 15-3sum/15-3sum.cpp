class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
//         int n=nums.size();
//         set<vector<int>> s;
//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int> v(3);
//                         v[0]=nums[i];
//                         v[1]=nums[j];
//                         v[2]=nums[k];
//                         sort(v.begin(),v.end());
//                         s.insert(v);
//                     }
//                 }
//             }
//         }
        
//         for(auto it:s){
//             ans.push_back(it);
//         }
        
//         return ans;
        
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size()-2;i++){
//             if(i==0 || (i>0 && nums[i]!=nums[i-1])){
//                 int low=i+1;
//                 int high=nums.size()-1;
                
//                 int sum=0-nums[i];
//                 // we'hv to find b+c=-(a)  (a=nums[i])
//                 while(low<high){
//                     if(nums[low]+nums[high]==sum){
//                         vector<int> temp(3);
//                         temp[0]=nums[i];
//                         temp[1]=nums[low];
//                         temp[2]=nums[high];
                        
//                         ans.push_back(temp);
                    
//                         // now for ensuring unique triplets
                        
//                         while(low<high && nums[low]==nums[low+1]){
//                             low++;
//                         }
//                         low++;
                        
//                         while(low<high && nums[high]==nums[high-1]){
//                             high--;
//                         }
//                         high--;
                    
//                     }
//                     else if(nums[low]+nums[high]<sum) low++;
//                     else high--;
//                 }
//             }
//         }
//         return ans;
        vector<vector<int>> res; 
        sort(num.begin(), num.end()); 
        
        // moves for a
        for (int i = 0; i < (int)(num.size())-2; i++) {
            
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i];
                
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res;
    }
};