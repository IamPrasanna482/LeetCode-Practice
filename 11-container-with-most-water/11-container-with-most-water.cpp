class Solution {
public:
    int maxArea(vector<int>& height) {
        int left_highest=0, right_highest=0;
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
            int length=j-i;
            int breadth=min(height[i],height[j]);
            int maxWater=length*breadth;
            ans=max(ans,maxWater);
            
            if(height[i] < height[j]) i++;
            else if(height[i] > height[j]) j--;
            else {
                i++;
                j--;
            }
            
        }
        return ans;
    }
};