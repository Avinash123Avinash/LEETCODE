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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr)
        return{};
        queue<pair<TreeNode*,int>>q;
        map<int,int>mpp;
        q.push({root,0});
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            int lev=q.front().second;
            q.pop();
            mpp[lev]=temp->val;
            if(temp->left!=NULL)
            q.push({temp->left,lev+1});
            if(temp->right!=nullptr)
            q.push({temp->right,lev+1});
        }
        vector<int>ans;
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};