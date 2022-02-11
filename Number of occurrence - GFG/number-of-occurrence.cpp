// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int findOcc(int arr[], int n, int x, int toggle){
	    int low=0;
	    int high=n-1;
	    int ans=-1;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        if(arr[mid]<x){
	            low=mid+1;
	        }
	        else if(arr[mid]>x){
	            high=mid-1;
	        }
	        else{
	            ans=mid;
	            if(toggle==-1){
	                //look at left subarray
	                
	                high=mid+toggle;
	            }
	            else{
	                low=mid+toggle;
	            }
	            
	        }
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    // as array is sorted, we definitly know that the element given in the question
	    // ex-2 -> all 2's will occur together
	    // so if we know the first occurence and the last occurence of the element
	    // we can return lastOcc-firstOcc+1
	    
	    int f=findOcc(arr,n,x,-1);
	    int l=findOcc(arr,n,x,+1);
	    if(l==-1 and f==-1) return 0;
	    return l-f+1;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends