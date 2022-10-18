class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;
        if(n<1)
            return answer;
        
        int product = 1;
        for(int i=0;i<n;++i)
        {
            product *= nums[i];
            answer.push_back(product);            
        }
        
        product = 1;
        for(int i=n-1;i>0;--i)
        {
            answer[i] = answer[i-1]*product;
            product *= nums[i];
        }
        answer[0] = product;
        
        return answer;
    }
};
