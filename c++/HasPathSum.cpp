 class Solution {
public:
 
 bool isLeaf(TreeNode* left, TreeNode* right){
           if(left == nullptr && right == nullptr) return true;
           return false;  
       }
 
bool hasPathSum(TreeNode* root, int targetSum) { 
 if(root == nullptr) return false;
 int comp = targetSum - root->val;
 if(isLeaf(root->left, root->right) && comp == 0) return true;
return hasPathSum(root->left, comp) || hasPathSum(root->right, comp); 

   if(root == nullptr) return false;
        int comp = targetSum - root->val;
        if(isLeaf(root->left, root->right) && comp == 0) return true;
        return hasPathSum(root->left, comp) || hasPathSum(root->right, comp); 
    }
};
