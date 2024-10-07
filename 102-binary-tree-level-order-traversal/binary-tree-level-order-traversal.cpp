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
    // void f(TreeNode*root,vector<vector<int>>&level,vector<int>&temp)
    // {
    //     queue<TreeNode*>q;
    //     if(root==NULL)
    //     {
    //         return;
    //     }

    //     while(!q.empty())
    //     {
    //         TreeNode*current=q.front();
    //         q.pop();
    //         if(current->left!=NULL)
    //         {
    //             f(current->left,level,temp);
    //         }
    //         else if(current->right!=NULL)
    //         {
    //             f(current->right,level,temp);
    //         }
    //          temp.push_back(current->val);
    //     }
    //      level.push_back(temp);
    //      return;
    // }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> level;
        if (root == NULL)
            return level;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> temp;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* current = q.front();
                q.pop();
                if (current->left != NULL)
                    q.push(current->left);
                if (current->right != NULL)
                    q.push(current->right);
                temp.push_back(current->val);
            }
            level.push_back(temp);
        }
        return level;
    }
};