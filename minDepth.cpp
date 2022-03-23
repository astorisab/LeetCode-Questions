int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int valuer = minDepth(root->right);
        int valuel = minDepth(root->left);
        if(valuel != 0 && valuer == 0) return valuel + 1;
        else if(valuer != 0 && valuel == 0) return valuer + 1;
        return(min(valuer,valuel)) + 1;
    }
