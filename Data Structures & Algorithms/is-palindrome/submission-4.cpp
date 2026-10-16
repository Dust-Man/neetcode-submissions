class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() -1;

        while(l <= r){
            if(!isalpha(s[l]) and !isdigit(s[l])){
                l++;
                continue;
            }
            if(!isalpha(s[r]) and !isdigit(s[r])){
                r--;
                continue;
            }
            cout << toupper(s[l]) << " " << toupper(s[r]) << endl;
            if(toupper(s[l]) != toupper(s[r])) return false;
            l++;
            r--;

        }
        return true;
    }
    
};
