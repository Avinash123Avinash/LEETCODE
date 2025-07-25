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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        // map<int, int> mpp;
        while (!q.empty()) {
            int n = q.size();
            TreeNode* node = nullptr;
            for (int i = 0; i < n; i++) {
                node=q.front();
                q.pop();
                if (node->left != nullptr)
                    q.push(node->left);
                if (node->right != nullptr)
                    q.push(node->right);
            }
            ans.push_back(node->val);
        }

        // for (auto it : mpp) {
        //     ans.push_back(it.second);
        //     cout << it.second << endl;
        // }
        return ans;
    }
};