class Solution {
public:

int secondRecDef(vector<int>& nums, int left , int right, int target){
        
        int mid = (left + right)/2;
        if(nums[mid] == target) return mid;
        if(left > right) return left;
    
        if(nums[mid] >= target){
        return secondRecDef(nums, left, mid - 1, target);
        }else{
        return secondRecDef(nums, mid + 1, right, target);
        }

 }
 
 int searchInsert(vector<int>& nums, int target){
 
         return secondRecDef(nums, 0, nums.size() - 1, target);   
     
}
};
