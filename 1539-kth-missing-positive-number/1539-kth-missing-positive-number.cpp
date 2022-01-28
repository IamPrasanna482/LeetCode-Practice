class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        int ans;
        for(int i=1;i<10000;i++){
            if(mpp[i]==0){
                k--;
                if(k==0){
                    
                     ans= i;
                    break;
                }
            }
            cout<<mpp[i]<<" ";
        }
    return ans;
    }
};