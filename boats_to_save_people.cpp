class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boatCount=0;
        int n= people.size();
        int left=0, right=n-1;
        while(left<= right){
            if(people[left] + people[right] <= limit){
                right--;
                left++;
            }else
                right--;
            boatCount++;     
        }
        return boatCount;
    }
};
