class Solution {
private:
    int maxLeft(vector<int> water,int index){
        int maxi=water[index];
        for(int i=index;i>=0;i--){
            maxi=max(water[i],maxi);
        }
        return maxi;
    }
    
    int maxRight(vector<int> water,int index){
        int maxi=water[index];
        for(int i=index;i<water.size();i++){
            maxi=max(water[i],maxi);
        }
        return maxi;
    }
public:
    int trap(vector<int>& height) {
        // BruteForce O(n^2)
            /*
        int n=height.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(maxLeft(height,i),maxRight(height,i))-height[i];
        }
        return ans;
        */
            
        // approach 2-> using prefix sum and suffix sum
        // it will take O(N) TC but O(N) SS(for storing prefix and suffix sum)
        int n=height.size();
        vector<int> prefixSum(n,0);
        vector<int> suffixSum(n,0);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            prefixSum[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            suffixSum[i]=maxi;
        }
   
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(prefixSum[i],suffixSum[i])-height[i];
        }
        return ans;
    }
};