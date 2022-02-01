// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        // int cnt=0;
        // int i=0,j=0;
        // while(i<n && j<m){
        //     if(a[i]<b[j]){
        //         cnt++;
        //         i++;
        //     }
        //     else if(a[i]>b[j]){
        //         cnt++;
        //         j++;
        //     }
        //     else{
        //         cnt++;
        //         i++;
        //         j++;
        //     }
        // }
        // while(i<n){
        //     cnt++;
        //     i++;
        // }
        // while(j<m){
        //     cnt++;
        //     j++;
        // }
        // return cnt;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            mpp[b[i]]++;
        }
        int cnt=0;
        for(int i=0;i<mpp.size();i++){
            if(mpp[i]>0) cnt++;
        }
        return cnt;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends