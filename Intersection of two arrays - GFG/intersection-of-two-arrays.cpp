// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;
    for(int i=0;i<n;i++){
        mpp1[a[i]]++;
    }
    for(int i=0;i<m;i++){
        mpp2[b[i]]++;
    }
    
    int cnt=0;
    
    for(int i=0;i<max(mpp1.size(),mpp2.size());i++){
        if( mpp2[i]>0 && mpp1[i]>0) cnt++;
    }
    return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends