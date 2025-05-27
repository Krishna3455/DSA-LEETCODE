class Solution {
public:
    int reverse(int x) {
        int rev=0,digit=0,orig=x;
        while(x!=0)
        {
            digit=x%10;
            if(rev>INT_MAX/10 | rev<INT_MIN/10) return 0;
            rev=rev*10+digit;
            x/=10;
        }   
        return rev;
    }
};
