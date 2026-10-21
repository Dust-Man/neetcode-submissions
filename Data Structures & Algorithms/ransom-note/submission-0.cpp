class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> rans(26);
        vector<int> mag(26);
        for(int i = 0; i < ransomNote.size(); i++){
            rans[ransomNote[i] - 'a']++;
        }
        for(int i = 0; i < magazine.size(); i++){
            mag[magazine[i] - 'a']++;
        }

        for(int i = 0; i < ransomNote.size(); i++){
            if(mag[ransomNote[i] - 'a'] < rans[ransomNote[i]-'a'])
                return false;
        }
        return true;
    }
};