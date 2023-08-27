class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int p=1;
	    for(int i=0;i<n;i++){
		    nums.insert(nums.begin()+i+p,nums[n+i+p-1]);
		    p++;
	    }
        for(int i=2*n;i<nums.size();){
		    nums.erase(nums.begin()+i);
	    }
        return nums;
    }
};