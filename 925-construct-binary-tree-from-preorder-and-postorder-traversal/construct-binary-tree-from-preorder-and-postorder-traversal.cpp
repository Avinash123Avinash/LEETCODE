
class Solution {
public:
    unordered_map<int, int> postorderMap;
    int preIndex = 0;

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        for (int i = 0; i < postorder.size(); i++) {
            postorderMap[postorder[i]] = i; // Store postorder indices
        }
        return buildTree(preorder, postorder, 0, postorder.size() - 1);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& postorder, int left, int right) {
        if (left > right || preIndex >= preorder.size()) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[preIndex++]); // Pick next preorder element as root

        if (left == right || preIndex >= preorder.size()) {
            return root; // Leaf node
        }

        int postIndex = postorderMap[preorder[preIndex]]; // Next preorder element in postorder

        if (postIndex <= right) { 
            root->left = buildTree(preorder, postorder, left, postIndex); 
            root->right = buildTree(preorder, postorder, postIndex + 1, right - 1); 
        }

        return root;
    }
};
