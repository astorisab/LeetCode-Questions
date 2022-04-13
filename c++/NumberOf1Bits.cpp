int hammingWeight(uint32_t n) {
//         shift version
        int total = 0;
        int shift = 0;
        while(shift < 32){
            if((n >> shift & 1) == 1) ++total;
            ++shift;
        }
        return total;
 }
