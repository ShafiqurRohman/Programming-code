class Solution {
public:
    int mem[105][105];
    int dfs(vector<vector<int>>& m, int r, int c){
        int n = m.size();
        if(r<0 or r>=n or c<0 or c>=n)return 100000;
        int &ret = mem[r][c];
        if(ret != INT_MAX)return ret;
        ret = m[r][c];
        if(r==(n-1))return ret;
        ret += min({dfs(m, r+1, c-1), dfs(m, r+1, c), dfs(m, r+1, c+1)});
        return ret;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        for(int i=0; i<105; i++){
            for(int j =0; j<105; j++)mem[i][j] = INT_MAX;
        }
        for(int i=0; i<matrix[0].size(); i++){
            ans = min(ans, dfs(matrix, 0, i));
        }
        return ans;
    }
};
