class Solution {
public:
    int removePalindromeSub(string s) {
        string str=s;
        reverse(str.begin(),str.end());
        if(s.size()==0) return 0;
        else if(str==s) return 1;
        else return 2;
    }
};