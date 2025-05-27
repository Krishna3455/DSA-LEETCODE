class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0,result=0;
        long n1=0;

    while(n1<=n)
    {
        n1=pow(2,i);
        if(n1==n) result=true;
        i++;
    }
    return result;
    }
};