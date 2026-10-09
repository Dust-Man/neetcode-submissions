class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> groups;
        for(int i = 0; i < strs.size(); i++){
            string str_copy = strs[i];
            sort(str_copy.begin(), str_copy.end());
            groups[str_copy].push_back(i);
        }

        vector<vector<string>> ans;
        for(auto group: groups){
            ans.push_back({});
            for(auto i: group.second){
                ans.back().push_back(strs[i]);
            }
        }
        return ans;
    }
};
