class Solution {
public:
   string reverseParentheses(string s) {

        string p = "", res = "";
        stack<int> stack;
        for(int i = 0; i < s.size(); i ++)
            if(s[i] == ')'){
                string t = p.substr(stack.top() + 1);
                reverse(t.begin(), t.end());
                p = p.substr(0, p.size() - (t.size() + 1));
                p += t;
                stack.pop();
            }
            else{
                p += s[i];
                if(s[i] == '(') stack.push(p.size() - 1);
            }
        return p;
    }
};
