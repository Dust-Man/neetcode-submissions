class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        int n = s.size();
        for(char c: s){
            if(c == '(' or c == '{' or c == '['){
                par.push(c);
            }
            if(c == ')' or c == '}' or c == ']'){
                if(par.size() == 0) return false;
                int top = par.top();
                if(c == ')' and top == '(' ){
                    par.pop();
                    continue;
                }
                if(c == ']' and top == '[' ){
                    par.pop();
                    continue;
                }
                if(c == '}' and top == '{' ){
                    par.pop();
                    continue;
                }
                return false;
            }
        }
        if(par.size() > 0) return false;
        return true;
    }

};
