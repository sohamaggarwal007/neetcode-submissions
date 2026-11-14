class Solution {
public:
    int hammingWeight(int n) {
        vector<int> arr;
        int count = 0;

        while(n>0) {
            int r = n%2;
            arr.push_back(r);
            n = n/2;
        }
        reverse(arr.begin(), arr.end());

        for(int bit:arr) {
            if(bit == 1) {
                count++;
            }
        }
        return count;
    }
};