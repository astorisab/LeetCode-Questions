
// minimal memory overhead
int majorityElement(vector<int>& nums) {
 int change1 = -1;
        int val1 = 0;
        int val2 = 0;
        int change2 = -1;
        for(auto x:  nums){
            if(change1 < 0 || x == val1){
               change1 += 1;
               val1 = x; 
            }else if(change2 < 0 || x == val2){
               change2 += 1;
               val2 = x;
            }else{
                change1 -= 1;
               change2 -= 1; 
            }
        }
        if(change1 > change2) return val1;
        else return val2;
 }
