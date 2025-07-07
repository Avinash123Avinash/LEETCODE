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
int f(TreeNode* root)
{
        if(root==nullptr)
        return 0;
        int lh=f(root->left);
        int rh=f(root->right);
        return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        return true;
        int lh=f(root->left);
        int rh=f(root->right);
        if(abs(lh-rh)>1)
        return false;
        bool lh1=isBalanced(root->left);
        bool rh1=isBalanced(root->right);

 if(!lh1 || !rh1)
 return false;

 return true;

    }
};