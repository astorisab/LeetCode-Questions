int majorityElement(vector<int>& nums) {
//         overhead
        std::unordered_map<int,int>oh;
        for(auto x : nums){
            oh[x] += 1;
        }
        for(auto x : oh){
           if(x.second > nums.size()/2) return x.first; 
        }
        return 0;
   }
