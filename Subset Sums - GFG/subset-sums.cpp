// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int findSum(vector<int> v){
        int s=0;
        for(auto it:v) s+=it;
        return s;
    }
    void printSubsetSum(int ind,int sum,vector<int> &arr,vector<int> ds,vector<int> &temp){
        if(ind>=arr.size()){
            // int sum=findSum(ds);
            temp.push_back(sum);
            return;
        }
        
        ds.push_back(arr[ind]);
        printSubsetSum(ind+1,arr[ind]+sum,arr,ds,temp);
        
        ds.pop_back();
        printSubsetSum(ind+1,sum,arr,ds,temp);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ds,temp;
        printSubsetSum(0,0,arr,ds,temp);
        return temp;
        
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends