class Solution {
public:
    int finalValueAfterOperations(vector<string>& vec) {
        int ans=0;
        for(int i=0;i<vec.size();i++){
            if(vec[i]=="--X" || vec[i]=="X--") ans--;
            else ans++;
        }
        return ans;
    }
};