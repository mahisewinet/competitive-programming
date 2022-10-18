class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int ,int> m;
 
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]&1)
                nums[i]=1;
 
            else
                nums[i]=0;
        }
 
        int sum=0,i,count=0;
        for(i=0;i<nums.size();++i)
        {
            sum+=nums[i];
            if(sum==k)
                count++;
 
            if(m.find(sum-k)!=m.end())
                count+=m[sum-k];
 
            m[sum]++;
        }
 
        return count;
    }
};
