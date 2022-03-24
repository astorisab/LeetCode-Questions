 class Solution {
public:
 
 bool isLeaf(TreeNode* left, TreeNode* right){
           if(left == nullptr && right == nullptr) return true;
           return false;  
       }
       
bool hasPathSum(TreeNode* root, int targetSum) { 
 if(root == nullptr) return false;
        
            stack<TreeNode*>currentPaths;
            stack<int>value;
        
       
            currentPaths.push(root);
            value.push(targetSum - root->val);

        
            while(!currentPaths.empty()){
                TreeNode* top = currentPaths.top();
                int comp = value.top();
                currentPaths.pop();
                value.pop();
                

                
                 
                bool isPush = false;
                if(top->left && !isLeaf(top->left, top->right)){
                   currentPaths.push(top->left);
                   value.push(comp - top->left->val);
                   isPush = true;
                }
                if(top->right && !isLeaf(top->left, top->right)){
                   currentPaths.push(top->right);
                   value.push(comp - top->right->val);
                   isPush = true;
                }
                if(!isPush && comp == 0){
                    return true;
                }
              
            }
            return false;
       
       
       
    };
    
    
    
    
    
    
 //                     refactor possible vector implimenation for future;   
    
    //                 if(top == nullptr){
                
//                 if(leaf == 2 && comp == 0){
//                     return true;
//                 }else if(leaf == 2){
//                     leaf = 0;
//                 }
//                 leaf += 1;   
                    
//             }else{
                // leaf = 0; 
                    
                    

                // if(start < currentVal.size()){ 
                //    currentVal[start] = top; 
                // }else{
                //    currentVal.push_back(top); 
                // }
    
    
    
