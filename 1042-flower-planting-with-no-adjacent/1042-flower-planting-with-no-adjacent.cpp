class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        map<int,vector<int>>graph;
        vector<int>vec(n);
        for(auto it:paths){
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        
       for(int i=1;i<=n;i++){
    	    vector<int>color(5,0);
    	    for(auto child:graph[i]){
    		    color[vec[child-1]] = 1;
    	    }
    	    for(int j=1;j<=4;j++){
    		    if(color[j]==0){
    			    vec[i-1] = j;
    			    break;
    		    }
    	    }
    }
    return vec;
    }
};