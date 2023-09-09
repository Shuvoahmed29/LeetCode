class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        map<int,string>mp;
        while(ss>>word){
            int idx=word.size()-1;
            int index = word[idx]-'0';
            word.erase(word.begin()+idx);
            mp[index] = word;
        }
        string str;
        for(auto it:mp) str+=it.second+' ';
        str.erase(str.begin()+str.size()-1);
        return str;
    }
};