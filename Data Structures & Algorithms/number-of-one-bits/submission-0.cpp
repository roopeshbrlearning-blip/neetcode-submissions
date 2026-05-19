class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int oneBit = 1;
        int onecount = n & oneBit;

        for(int i =0; i<32; i++){
            n = n>>1;
            onecount += (n) & oneBit;

        }

        return onecount;

    }
};
