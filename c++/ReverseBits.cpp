uint32_t reverseBits(uint32_t n) {
        uint32_t rev;
        int shift = 0;
        while(shift < 32){
            rev = rev << 1 | (n >> shift & 1);
            ++shift;
        }
        return rev;
    }
