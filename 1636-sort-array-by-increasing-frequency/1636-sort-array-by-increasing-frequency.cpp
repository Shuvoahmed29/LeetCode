class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
        if(a[0]<b[0]) return true;
        if(a[0]==b[0]) return a[1]>b[1];
        else return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums) mp[it]++;
        vector<vector<int>> vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end(),comp);
        vector<int>ans;
        for(auto it:vec){
            int p = it[0];
            while(p--){
                ans.push_back(it[1]);
            }
        }
        return ans;
    }
};