vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int>store;
       for(int i = 0; i < nums.size(); ++i){
           int comp = target - nums[i];
           if (store.find(comp) != store.end()) return {store[comp], i};
           else store[nums[i]] = i;
       } 
        return {-1,-1};
}
