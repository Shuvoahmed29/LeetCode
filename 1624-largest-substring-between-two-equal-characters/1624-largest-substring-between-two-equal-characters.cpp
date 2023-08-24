class Solution {
public:
    int maxLengthBetweenEqualCharacters(string str) {
        int mx = -1;
        string s=str;
	reverse(s.begin(),s.end());
	for(int i=0;i<str.size();i++){
		char ch = str[i];
		int idx = str.find(ch);
		str.erase(str.begin()+idx);
		int idx1 = s.find(ch);
		idx1 = s.size()-idx1-1;
		str.insert(str.begin()+idx,ch);
		if(idx==-1 || idx1==-1) continue;
		int p = abs(idx-idx1);
        mx=max(mx,p-1);
	}
        return mx;
    }
};