class Solution {
public:
    int subtractProductAndSum(int n) {
        int d=0,s=0, p=1;
        while(n>0)
        {
            d=n%10;
            n/=10;
            s+=d;
            p*=d;
        }

        return p-s;
    }
};