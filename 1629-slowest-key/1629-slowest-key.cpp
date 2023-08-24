class Solution {
public:
    char slowestKey(vector<int>& time, string str) {
        char ch=str[0];
        int mx=time[0];
        for(int i=1;i<str.size();i++){
            int k = abs(time[i-1]-time[i]);
            if(k>mx){
                mx=k;
                ch=str[i];
            }
            if(k==mx){
                if(ch<str[i]) ch = str[i];
            }
        }
        return ch;
    }
};