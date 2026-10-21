// Nunca te olvides de la cadena vacía

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        bool keep = true;
        string ans = "";
        for(int i = 0; i < strs[0].size(); i++){
            ans += strs[0][i];
            for(int j = 1; j < n; j++){
                if(strs[j][i] != ans[i] or i >= strs[j].size() ){
                    ans.pop_back();
                    return ans;
                } 
            }
        }
        return ans;
    }
};