/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(TreeNode* root) {
        if (root->right == NULL)
            return root->left;
        else if (root->left == NULL)
            return root->right;
        else {
            TreeNode* Rootright = root->right;
            TreeNode* lastright = findlr(root->left);
            lastright->right = Rootright;
            return root->left;
        }
    }
    TreeNode* findlr(TreeNode* root) {
         while (root->right != NULL) {
            root = root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
         if (root == NULL)
                return NULL;
                if(root->val==key)
                return helper(root);
                 TreeNode* temp = root;
        while (root!= NULL) {
           
            if (root->val > key) {
                if (root->left != NULL and root->left->val == key)
                {
                    root->left = helper(root->left);
                    break;
                }
                else
                    root =root->left;
            }
            else {
                if (root->right != NULL and root->right->val == key){
                    root->right = helper(root->right);
                 break;
                }
                else
                    root = root->right;
        }
    }
    return temp;
}
};