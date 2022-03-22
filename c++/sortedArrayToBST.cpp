TreeNode* sortedArrayToBST(vector<int>& nums) {
        
//         recursive version
        if(nums.size() == 0) return nullptr;
        if(nums.size() == 2){
            TreeNode* start = new TreeNode(nums[1]);
            start->left = new TreeNode(nums[0]);
            return start;
        }
        
        int mid = nums.size()/2;
        
        vector<int>numsLeft(nums.begin(), nums.begin() + mid);
        vector<int>numsRight(nums.begin() + mid + 1, nums.end());
        
        TreeNode* root = new TreeNode(nums[mid]);
            
        root->left = sortedArrayToBST(numsLeft); 
        root->right = sortedArrayToBST(numsRight);
        
        return root;

    }
