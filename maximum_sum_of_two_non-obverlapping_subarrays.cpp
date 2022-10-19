class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        vector<int> sums(nums.size() + 1);
        int maxLval = 0;
        int maxRval = 0;
        int result = 0;
        for (int i = 1; i <= nums.size(); i++)
        {
            sums[i] = nums[i - 1] + sums[i - 1];
        }
        for (int i = firstLen; i <= nums.size() - secondLen; i++)
        {
            int currLVal = sums[i] - sums[i - firstLen];
            int currMVal = sums[i + secondLen] - sums[i];
            maxLval = max(maxLval,currLVal);
            result = max(result,currMVal + maxLval);
        }
        for (int i = secondLen; i <= nums.size() - firstLen; i++)
        {
            int currMVal = sums[i] - sums[i - secondLen];
            int currLVal = sums[i + firstLen] - sums[i];
            maxRval = max(maxRval,currMVal);
            result = max(result,currLVal + maxRval);
        }
        return result;    }
};
