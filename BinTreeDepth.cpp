/**
Recursive solution to get maximum depth of Binary Tree
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int left_height = maxDepth(root->left);
        int right_height = maxDepth(root->right);
        return (left_height > right_height) ? left_height + 1 : right_height + 1;
        
    }
};