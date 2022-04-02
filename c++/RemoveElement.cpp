int removeElement(vector<int>& nums, int val) {
        vector<int>remove;
        int count = 0;
        for(auto x: nums){
            if(x == val){remove.push_back(count);} 
            count++;
        }
        if(remove.size() == 0) return nums.size();
        int dec = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(dec < remove.size() && remove[dec] == i){dec++;}
            else{nums[i - dec] = nums[i];}
        }
        return nums.size() - remove.size();
 }
