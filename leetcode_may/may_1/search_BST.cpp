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
    TreeNode * helper(TreeNode* r,int va)
    {
        if(r==NULL)
            return r;
        if(r->val>va)
            r=searchBST(r->left,va);
        else if(r->val<va)
            r=searchBST(r->right,va);
        else 
             return r;
        
        return r;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return helper(root,val);
    }
};