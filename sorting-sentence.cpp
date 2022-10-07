class Solution {
public:
    string sortSentence(string s) {
        string word;
        string answer;
        vector <string> v(10);
        for(int i=0; i<s.size();i++){
            if(s[i]>=48 && s[i]<= 57){
                v[s[i]-48]= word + " ";
                word="";
                i++;
            }
            else word+=s[i];
        }
        for(string x: v){
            answer+= x;
        }
        answer.pop_back();
        return answer;
    }
};
