class Solution {
public:
    int lastStoneWeight(vector<int>& vec) {
        priority_queue<int>Q;
        for(auto it:vec) Q.push(it);
        while(Q.size()>1){
            int x=Q.top();
            Q.pop();
            int y=Q.top();
            Q.pop();
            if(x==y) continue;
            else Q.push(x-y);
        }
        if(Q.size()==0) return 0;
        else return Q.top();
    }
};
/*
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
*/
