vector<int> preorderTraversal(TreeNode* root) {
        static TreeNode* comp = root;
        if(root == nullptr) return {};
        vector<int>start;
        start.push_back(root->val);
        vector<int>left = preorderTraversal(root->left);
        vector<int>right = preorderTraversal(root->right);
        start.insert(start.end(), left.begin(), left.end());
        start.insert(start.end(), right.begin(), right.end());
        
        return start;
         
    }
