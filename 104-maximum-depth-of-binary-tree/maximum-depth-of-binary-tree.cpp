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
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        int maxi=1;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto it= q.front();
                q.pop();
                TreeNode* node=it.first;
                int val=it.second;
                maxi=max(maxi,val);
                if(node->left!=nullptr)
                q.push({node->left,(val+1)});
                if(node->right!=nullptr)
                q.push({node->right,(val+1)});
            }
        }
         return maxi;

    }
};