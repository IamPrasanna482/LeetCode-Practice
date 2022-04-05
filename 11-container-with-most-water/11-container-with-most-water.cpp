class Solution {
public:
    int maxArea(vector<int>& height) {
//       int n=height.size();
//       int i=0;
//       int j=n-1;
//       int maxWater=0;
//         while(i<j){
//             int h=j-i;
//             int w=min(height[i],height[j]);
//             // int area=w;
//             // maxWater=max(maxWater,area);
//             if(height[i]<height[j]){
//                 i++;
//             }
//             else if(height[i]>height[j]){
//                 j++;
//             }
//             else{
//                 i++,j--;
//             }
            
//          }
        
//         return maxWater;
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
};