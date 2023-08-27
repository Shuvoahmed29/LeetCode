class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0,p;
        for(auto it:mp){
            if(it.second>=2){
                p = (it.second*(it.second-1))/2;
                ans +=p;
            }
        }
        return ans;
    }
};