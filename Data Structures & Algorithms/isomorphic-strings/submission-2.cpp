class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mp;
        map<char, char> mp2;
        for(int i = 0; i< s.size(); i++){
            if(!mp[s[i]] and !mp2[t[i]]){
                mp[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
                
            else if(mp[s[i]] != t[i] or mp2[t[i]] != s[i]){
                return false;
            }
                
        }
        return true;
    }
};