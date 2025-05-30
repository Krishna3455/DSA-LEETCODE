class Solution {
public:
    bool isPowerOfThree(int n) {
        long n1=0;
        int i=0;
        while(n1<=n)
        {
            n1=pow(3,i);
            if(n1==n) return true;
            i++;
        }
        return false;
    }
};