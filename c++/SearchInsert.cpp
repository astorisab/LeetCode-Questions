int RecDef(vector<int>& nums, int& target, int l, int r){
    
            
        int mid = (r-l)/2;
        if(l != 0){mid = l + (r-l)/2;}

        if( mid == 0 || mid == nums.size() - 1){ 
           
           if(mid - 1 == 0 && nums[mid - 1] >= target)return 0; 
           if(nums[mid] < target) return mid + 1;
           return mid;
        }

        if(nums[mid] == target) { return mid;}
       
        if(mid - 1 >= 0 && 
           nums[mid] >= target && nums[mid - 1] < target){
                    
                    return mid;
        }else if(mid + 1 < nums.size() && nums[mid] < target && nums[mid + 1] >= target){  
                    return mid + 1;
        }
        

        if(nums[mid] < target){

           return RecDef(nums,target, mid + 1, r); 
        }else{

           return RecDef(nums, target, l,  mid - 1); 
        }

        return 0;
    }
    
    
    int searchInsert(vector<int>& nums, int target) {
     return RecDef(nums, target, 0, nums.size());  
    }
