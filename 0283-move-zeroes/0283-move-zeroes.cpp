class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cunt=0;
        vector<int>vec;
        for(auto it:nums){
            if(it != 0) vec.push_back(it);
            else cunt++;
        }
        for(int i=0;i<cunt;i++) vec.push_back(0);
        nums = vec;
    }
};