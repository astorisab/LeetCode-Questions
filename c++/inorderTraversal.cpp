vector<int> inorderTraversal(TreeNode* root) {
         if(root == nullptr) return {};
        vector<int>vectorLeft;
        vector<int>vectorRight;

        
        vectorLeft = inorderTraversal(root->left); 
        vectorLeft.push_back(root->val);
        vectorRight = inorderTraversal(root->right); 

        
        for(auto x : vectorRight){
            vectorLeft.push_back(x);
        }
        
        return vectorLeft;
}
