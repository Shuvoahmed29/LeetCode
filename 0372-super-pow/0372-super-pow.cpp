class Solution {
public:
const int M = 1337;
int binaryExp(int a,int b){
	int ans = 1;
	a = a%M;
	while(b){
		if(b&1){
			ans = (ans*1LL*a)%M;
		}
		a = (a*1LL*a)%M;
		b = b>>1;
	}
	return ans;
}
    
    int superPow(int a, vector<int>& vec) {
        int n=vec.size();
	int b=0;
    for(auto it:vec){
        b = (10*b + it)%1140;
    }
	// cout << b << endl;
	int ans = binaryExp(a,b)%1337;
	return ans;
    }
};