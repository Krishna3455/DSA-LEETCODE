class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i=2;i<=num;i++)
        {
            int d_sum=0;
            int digit=0;
            int a=i;
            while(a!=0)
            {
                digit=a%10;
                d_sum+=digit;
                a/=10;
            }
            if(d_sum%2==0) 
            {
                c++;
            }
        }
        return c;
    }
};