class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int r = matrix.size();
        int c = matrix[0].size();
        int _max = 0;
        
        vector<vector<int>> dp(r, vector<int>(c, 0));
        
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                dp[i][j] = matrix[i][j]-'0';
                
                if(dp[i][j]==0) continue;
                
                if(i>0 && j>0)
                {
                    dp[i][j] += min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
                }
                
                _max = max(_max, dp[i][j]);
            }
        }
        
        return _max*_max;
    }
};
