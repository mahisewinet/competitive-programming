class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        
        int n = nums.size();
        if(n==0)
            return 0;
        
        unordered_map<int,int> mymap;   
        int currSUM = 0;
        int i = 0;
        int count = 0;
        
        while(i<n)
        {
            currSUM += nums[i];
            
            if(currSUM == k)    
                count += 1;
            
            if(mymap.find(currSUM-k)!=mymap.end())
                count += mymap[currSUM-k];
            
            mymap[currSUM] += 1;
            i += 1;
        }
        return count;
    }
};
