class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int>answer;
        int n= temperatures.size()-1;
        for(int i=n; i>=0; i--){
            if(st.empty()){
                st.push(i);
                answer.push_back(0);
            }else {
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }
                if(st.empty()){
                    st.push(i);
                    answer.push_back(0);
                }else{
                    answer.push_back(st.top()-i);  
                    st.push(i);
                }
            }
        }
        reverse (answer.begin(),answer.end());
        return answer;
    }
};
