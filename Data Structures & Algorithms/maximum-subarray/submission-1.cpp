class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int latestSum = 0;
    int maximumSum = 0;

    for (int i=0; i<nums.size(); i++)
    {
        if (i==0)
        {
           latestSum = nums[i];
           maximumSum = nums[i];
        }
        else 
        {
           latestSum = latestSum + nums[i];
           maximumSum = max(latestSum,maximumSum);
        }
        if (latestSum <= 0)
        {
           latestSum = 0;
        } 
    } 
    return maximumSum;
    }
};

