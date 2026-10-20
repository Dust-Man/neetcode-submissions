class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> stck;
        for(int i = 0; i < n; i++){
            if(tokens[i] != "+" && tokens[i] != "-" &&
                tokens[i] != "*" && tokens[i] != "/"){
                stck.push(stoi(tokens[i]));
                continue;
            }
            if(stck.size() < 2) continue;
            int b = stck.top();
            stck.pop();
            int a = stck.top();
            stck.pop();

            if(tokens[i] == "+"){
                stck.push(a+b);
                continue;
            }
            if(tokens[i] == "-"){
                stck.push(a-b);
                continue;
            }
            if(tokens[i] == "*"){
                stck.push(a*b);
                continue;
            }
            if(tokens[i] == "/"){
                stck.push(a/b);
                continue;
            }
        }
        return stck.top();
    }
};
