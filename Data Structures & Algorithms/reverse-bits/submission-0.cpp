class Solution {
public:
    int reverseBits(int n) {
        vector<int> bits;
        int temp = n;
        for(int i=0; i<32; i++) {
            int bit = n&1;
            bits.push_back(bit);
            n = n>>1;
        }

        int result = 0;
        for(int i=0; i<32; i++) {
            result = (result*2) + bits[i];
        }

        return result;
    }
};