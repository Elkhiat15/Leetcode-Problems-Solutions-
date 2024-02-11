class Solution {
public:
    //iterate on each column -> push indeces if num = -1, get max -> replace (-1, max) 
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int i = 0 ; i< matrix[0].size(); i++){
            vector<int> ind;
            int mx = -2;
            for(int j=0 ; j< matrix.size();j++){
                if(matrix[j][i] == -1)
                    ind.push_back(j);
                mx = max(mx, matrix[j][i]);
            }
            for(int In : ind) matrix[In][i]= mx;
        }
        
        return matrix;
    }
};