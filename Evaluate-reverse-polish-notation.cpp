class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int a,b;
        for(string x: tokens){
            if(x=="+"){
                 a = s.top();
                s.pop();
                 b = s.top();
                s.pop();
                
                s.push( a+b);
            }else if(x=="-"){
                 a = s.top();
                s.pop();
                 b = s.top();
                s.pop();
                
                s.push(b-a);
            } else if(x=="*"){
                 a = s.top();
                s.pop();
                 b = s.top();
                s.pop();
               int res = ( unsigned int)a*b;
                s.push(res);
            } else if(x=="/"){
                 a = s.top();
                s.pop();
                 b = s.top();
                s.pop();
                 
                s.push(b/a);
            } else {
                s.push(stoi(x));
            }
                
        }
        return s.top();
    }
};
