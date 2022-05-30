class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int front=j+1;
                int back=n-1;
                int target_2=target-nums[i]-nums[j];

                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum<target_2) {
                        // move front
                        front++;
                    }
                    else if(two_sum>target_2) {
                        // move back
                        back--;
                    }
                    else{
                        // quad found;
                        vector<int> quad(4);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        
                        ans.push_back(quad);
                        
                        // ensure uniqueness of 3rd and 4th number
                        
                        while(front<back && nums[front]==quad[2]) ++front;
                        while(front<back && nums[back]==quad[3])  --back;
                        
                        
                        
                    }
                }
                
                // ensure uniqueness of first and second number
                
                while(i+1<n && nums[i]==nums[i+1]) ++i;
                while(j+1<n && nums[j]==nums[j+1]) ++j;
                
            }
        }
        
        return ans;
    }
};