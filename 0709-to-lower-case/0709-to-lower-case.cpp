class Solution {
public:
    string toLowerCase(string s) {
        transform(cbegin(s), cend(s), begin(s), ::tolower);
        return s;
    }
};