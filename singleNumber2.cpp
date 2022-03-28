 int singleNumber(vector<int>& nums) {
// sorting        
        std::sort(nums.begin(), nums.end());
        int same = nums[0];
        if(nums.size() == 1 || nums[0] != nums[1] ) return nums[0];
        for(int i = 1; i < nums.size(); ++i){
            if(same == nums[i]){
                same = nums[i + 1];
                ++i;
            }else{
                return same;
            }
        }
        return same;
      
  }
