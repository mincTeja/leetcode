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
    int depth(struct TreeNode *t,int v,int va,int &parent)
    {
        if(t==NULL)
        {
            return 0;
        }
        if(t->val==v)
            return va;
        parent=t->val;
        int l=depth(t->left,v,va+1,parent);
        if(l!=0)
            return l;
        parent=t->val;
        return depth(t->right,v,va+1,parent);
            
    }
    // bool sibling(struct TreeNode *t,int v1,int v2)
    // {
    //     if(t!=NULL && t->left!=NULL && t->right!=NULL)
    //         return (t->left->val==v1 && t->right->val==v2 )||(t->left->val==v2 && t->right->val==v1 ) ||sibling(t->left,v1,v2)||sibling(t->right,v1,v2);
    //     return 0;
    // }
    bool isCousins(TreeNode* root, int x, int y) {
        int px=-1,py=-1;
        int lx=depth(root,x,1,px);
        int ly=depth(root,y,1,py);
        cout<<"lx : "<<lx<<"ly : "<<ly;
        //cout<<" "<<sibling(root,x,y);
        if( lx==ly && px!=py)
            return true;
        return false;
    }
};