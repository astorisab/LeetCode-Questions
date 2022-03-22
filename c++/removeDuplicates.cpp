int removeDuplicates(vector<int>& nums) {
        int dec = 0;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i-dec-1] == nums[i]) dec++;
            nums[i-dec] = nums[i];
        }
        return nums.size() - dec;
    }
