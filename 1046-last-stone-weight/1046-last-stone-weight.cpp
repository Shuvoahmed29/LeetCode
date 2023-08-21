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