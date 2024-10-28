/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void dfs(TreeNode* root,TreeNode* target,vector<TreeNode*>&path,int &flag)
{
    if(root==NULL || flag)
    {
        return;
    }
    path.push_back(root);
    if(root==target)
    {
      flag=1;
      return;
    }
   
    if(root->left!=nullptr)
    dfs(root->left,target,path,flag);
     if(root->right!=nullptr)
    dfs(root->right,target,path,flag);
    if(!flag)
    path.pop_back();
  
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>pathp,pathq;
        // vector<TreeNode*>temp;
        int flagp=0;int flagq=0;
        dfs(root,p,pathp,flagp);
        dfs(root,q,pathq,flagq);
        TreeNode* lca=NULL;
        for(int i=0;i<min(pathp.size(),pathq.size());i++)
        {
            if(pathp[i]==pathq[i])
             lca=pathp[i];
            else
            break;
        }
        return lca;
    }
};