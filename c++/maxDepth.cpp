int MaxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        return max(maxDepth(root->right), maxDepth(root->left)) + 1;
    }
