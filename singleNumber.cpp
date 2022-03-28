// memory overhead
int singleNumber(vector<int>& nums) {
std::unordered_map<int,int>comp;
        for(auto x : nums){
            if(comp.find(x) == comp.end()) { comp[x] = 0;}
            else{
               comp.erase(x); 
            }
        }
        for(auto x : comp){
            return x.first;
        }
        return -1;
       }
