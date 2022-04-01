vector<int> postorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        vector<int>left = postorderTraversal(root->left);
        vector<int>right = postorderTraversal(root->right);
        right.push_back(root->val);
        left.insert(left.end(), right.begin(), right.end());       
        return left;
    }
