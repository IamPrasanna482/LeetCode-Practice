/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* r,vector<int> &v){
        if(r!=NULL){
        inorder(r->left,v);
        v.push_back(r->val);
        inorder(r->right,v);
    }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root,v);
        int ans;
        sort(v.begin(),v.end());
        for(auto it:v) cout<<it<<" ";
        
        for(int i=0;i<v.size();i++){
            if(i+1==k){
                ans=v[i];
                break;
            }
        }
        
        return ans;
    }
};