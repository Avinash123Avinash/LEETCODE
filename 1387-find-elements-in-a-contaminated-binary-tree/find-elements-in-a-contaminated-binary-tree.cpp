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
class FindElements {
public:
map<int,int>mpp;
void recover(TreeNode* root,int tar)
{
    if(!root)
    return;
    root->val=tar;
    mpp[tar]++;
    recover(root->left,2*root->val+1);
    recover(root->right,2*root->val+2);
}
    FindElements(TreeNode* root) {
        // root->val=0;
        // while(root->left!=nullptr || root->right!=nullptr)
        // {
        // if(root->left!=nullptr)
        // {
        //     root->left->val=2*root->val+1;
        //     mpp[2*root->val+1]++;
        //     root=root->left;
        // }
        // else
        // {
        //      root->right->val=2*root->val+2;
        //        mpp[2*root->val+2]++;
        //      root=root->right;
        // }
       
        // }
        // if(root)
        recover(root,0);
    }
   
    bool find(int target) {
         
        if(mpp.find(target)!=mpp.end())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */