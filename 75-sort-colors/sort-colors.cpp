class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cz=0,co=0,ct=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) cz++;
            if(nums[i]==1) co++;
            if(nums[i]==2) ct++;
        }
        for(int i=0;i<cz;i++)
        {
            nums[i]=0;
        }
        for(int i=cz;i<(cz+co);i++)
        {
            nums[i]=1;
        }
        for(int i=(cz+co);i<(cz+co+ct);i++)
        {
            nums[i]=2;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<",";
        }
    }
};