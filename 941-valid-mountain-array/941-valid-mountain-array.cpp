class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        if(n<3) return false;
        int l=0;
        int h=n-1;
        while(l+1<n-1  and arr[l]<arr[l+1] ){
            l++;
        }
        
        while( h-1>0 and arr[h]<arr[h-1]) {
            h--;
        }
        return l==h;
        
//         int n=arr.size();
//         int cnt=0;
//         if(n<3) return false;
//         int i;
//         for( i=0;i<n-1;i++){
//             if(arr[i]<arr[i+1]){
//                 cnt++;
//             }
//             else{
//                 break;
//             }
//         }
        
//         for(int j=i;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 cnt++;
//             }
//             else{
//                 break;
//             }
//         }
//         if(cnt==n-1) return true;
//         else{
//             return false;
//         }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n=arr.size();
        // int cnt=0;
        // if(n>=3){
        //     bool check=1;
        //     int i;
        //     for( i=0;i<n-1;i++){
        //         if(arr[i]<arr[i+1]){        //array is increasing
        //             cnt++;
        //         }
        //         else{
        //             check=0;
        //             break;                  
        //         }
        //     }
        //     if(arr[i]<arr[i+1]){
        //         cnt++;
        //         for(int j=i;j<n-1;j++){
        //             if(arr[j]>arr[j+1]){
        //                 cnt++;
        //             }
        //             else{
        //                 check=0;
        //                 break;
        //             }
        //         }
        //     }
        //     if(cnt==n) return true;
        //     if(!check) return false;
        // }
        // else{
        //     return false;
        // }
        
    }
};