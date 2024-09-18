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

typedef unsigned long long ll;
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        int ans = 0;

        queue<pair<TreeNode*, ll>> q;
        q.push({root, 0});

        // Perform level-order traversal
        while (!q.empty()) {
            int size = q.size();
            ll mmin = q.front().second;
            
            int first, last;

            for (int i = 0; i < size; i++) {
                ll cur_id = q.front().second - mmin;
                TreeNode* node = q.front().first;
                q.pop();

                if (i == 0) {
                    first = cur_id;
                }

                if (i == size - 1) {
                    last = cur_id;
                }
                if (node->left) {
                    q.push({node->left, cur_id * 2 + 1});
                }

                if (node->right) {
                    q.push({node->right, cur_id * 2 + 2});
                }
            }
            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
};