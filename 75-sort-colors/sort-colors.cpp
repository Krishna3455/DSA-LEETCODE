class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int czero=0,cone=0,ctwo=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) czero++;
            if(nums[i]==1) cone++;
            if(nums[i]==2) ctwo++;
        }
        for(int i=0;i<czero;i++)
        {
            nums[i]=0;
        }
        for(int i=czero;i<(czero+cone);i++)
        {
            nums[i]=1;
        }
        for(int i=(czero+cone);i<(czero+cone+ctwo);i++)
        {
            nums[i]=2;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<nums[i];
        }
    }
};