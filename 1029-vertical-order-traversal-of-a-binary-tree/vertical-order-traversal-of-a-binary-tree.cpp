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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> mpp;
        q.push({root, {0, 0}});
        TreeNode* temp1 = root;
        while (!q.empty()) {

            TreeNode* temp = q.front().first;
            int ver = q.front().second.first;
            int lev = q.front().second.second;
            q.pop();
            mpp[ver][lev].insert(temp->val);
            if (temp->left != NULL) {
                q.push({temp->left, {ver - 1, lev + 1}});
            }
            if (temp->right != NULL) {
                q.push({temp->right, {ver + 1, lev + 1}});
            }
        }
        vector<vector<int>> ans;

        for (auto it : mpp) {

            vector<int> col;
            for (auto p : it.second) {
                col.insert(col.end(), p.second.begin(), p.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};