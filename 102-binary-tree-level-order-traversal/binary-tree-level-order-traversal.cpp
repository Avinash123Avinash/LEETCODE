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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        vector<vector<int>>ans;
        if(root==nullptr)
        return ans;
        while(!q.empty())
        {
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++)
            {
              auto it=q.front();
              q.pop();
              TreeNode* node = it.first;
              int lev=it.second;
              temp.push_back(node->val);
              if(node->left!=nullptr)
              q.push({node->left,lev+1});
              if(node->right!=nullptr)
              q.push({node->right,lev+1});
            }
            ans.push_back(temp);
        }
        return ans;
    }
};