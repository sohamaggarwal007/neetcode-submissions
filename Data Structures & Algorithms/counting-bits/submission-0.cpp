class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);

        for(int i=0; i<=n; i++) {
            int count = 0;
            int num = i;
            while(num > 0) {
                int dig = num%2;
                if(dig == 1) {
                    count++;
                }
                num = num/2;
            }
            ans[i] = count;
        }

        return ans;
    }
};
