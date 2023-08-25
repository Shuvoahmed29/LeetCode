class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>vec,vec1;
        int n = matrix.size();
        int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
            	vec1.push_back(i);
            	vec.push_back(j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<vec.size();k++){
                if(j==vec[k]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<vec1.size();k++){
                if(i==vec1[k]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    }
};