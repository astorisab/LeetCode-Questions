void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

if(n != 0){ 
        
        for(int i = 0; i < n; ++i){
           nums1[m + i] = nums2[i];
        }


        
        int end = 0;
        int start2 = m;
        int start = 0;
        while(end < (n + m)){
            
            if(nums1[end] > nums1[start2]){
                start = end;
                std::swap(nums1[end], nums1[start2]);
                std::sort(nums1.begin() + end, nums1.end());
            }
            end++;
            if(end < m && start2 < (m + n)){
                start = end;
            }else{
                break;
            }
       }
}
