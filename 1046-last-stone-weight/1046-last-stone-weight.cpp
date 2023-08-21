class Solution {
public:
    void help(vector<int>&vec){
	sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
	for(int i=0;i<vec.size()-1;i=0){
		if(vec[i]!=vec[i+1]){
			int p = vec[i]-vec[i+1];
			vec.erase(vec.begin()+i+1);
			vec.insert(vec.begin()+i+1,p);
			vec.erase(vec.begin()+i);
		}
		else{
			vec.erase(vec.begin()+i+1);
			vec.erase(vec.begin()+i);
            if(vec.size()==0) vec.insert(vec.begin(),0);
		}
		sort(vec.begin(),vec.end());
    	reverse(vec.begin(),vec.end());
        if(vec.size()==1) break;
	}
}
    int lastStoneWeight(vector<int>& vec) {
        help(vec);
        return vec[0];
    }
};