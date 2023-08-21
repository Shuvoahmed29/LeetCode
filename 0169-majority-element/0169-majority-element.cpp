class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        int mx=INT_MIN,ans;
        for(auto it:mp){
            if(it.second>mx){
                mx = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};