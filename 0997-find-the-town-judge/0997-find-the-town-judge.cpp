class Solution {
public:
    int findJudge(int n, vector<vector<int>>& vec) {
        vector<int>in_degree(n+1),out_degree(n+1);
        for(auto it:vec){
            out_degree[it[0]]++;
            in_degree[it[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(in_degree[i]==n-1 && out_degree[i]==0)
                return i;
        }
        return -1;
    }
};