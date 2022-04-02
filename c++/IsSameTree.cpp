class Solution {
public:

bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        if((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr)) return false;
        
        if(p->val != q->val) return false;
        return isSameTree(q->left, p->right) && isSameTree(q->right, p->left);
            
    }
        
        
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->right, root->left);
    }
   };
