class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int temp;
        for(int i=0;i<n;i++)
        {
            nums[i]=pow(nums[i],2);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;
    }
};