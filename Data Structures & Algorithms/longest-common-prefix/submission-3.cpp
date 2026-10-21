// Nunca te olvides de la cadena vacía

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        bool keep = true;
        string ans = "";
        for(int i = 0; true; i++){
            if(i >= strs[0].size()) break;
            ans += strs[0][i];
            for(int j = 1; j < n; j++){
                //if(i >= strs[j].size()) break;
                if(strs[j][i] != ans[ans.size() - 1] or i >= strs[j].size() ){
                    ans.pop_back();
                    keep = false;
                    break;
                } 
            }
            if(!keep) break;
        }
        cout << ans;
        return ans;
    }
};