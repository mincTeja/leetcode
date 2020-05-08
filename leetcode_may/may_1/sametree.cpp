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
    bool helper(TreeNode *a,TreeNode *b)
    {
        if(a==NULL && b==NULL)
            return true;
        if(a==NULL || b==NULL)
            return false;
       
        return (a->val==b->val &&(helper(a->left,b->left)) && (helper(a->right,b->right)));
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return helper(p,q);
    }
};