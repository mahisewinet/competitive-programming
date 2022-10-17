class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n= nums.size();
        
        for(int i=0;i<n;i++){
            
            int leftSum=0, rightSum=0;
            
            int left=0,right=n-1;
            
            while(left<i){
                leftSum+=nums[left];
                left++;
            }
            
            while(right> i){
                rightSum+= nums[right];
                right--;
            }
            
            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }
};
