class Solution {
public:
    int bitwiseComplement(int n) {
        int orig=n;
        int mask=0;

        if(n==0) return 1;

        while(orig!=0)
        {
            mask=(mask<<1) | 1;
            orig=orig>>1;
        }

        int ans=(~n) & mask;
        return ans;
    }
};