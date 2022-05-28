class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // 2 pointers approach
       
        int i=0;
        for(auto it:nums){
           if(i==0 || i==1 || nums[i-2]!=it){
               nums[i]=it;
               i++;
           }
       }
        
        return i;
        
//         int ht[10001]={0};
//         for(int it:nums){
//             ht[abs(it)]++;
//         }
        
//         vector<int> v;
        
        
//         for(int i=0;i<10001;i++){
//             if(ht[i]>=2){
//                 v.push_back(i);
//                 v.push_back(i);
//             }
//             else if(ht[i]==1){
//                 v.push_back(i);
//             }
//         }
//         // for(auto it:v) cout<<it<<" ";
//         // return 0;
//         for(int i=0;i<v.size();i++){
//             nums[i]=v[i];
//         }
//         return v.size();
        
        
    }
};