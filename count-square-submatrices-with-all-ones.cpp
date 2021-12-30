class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int res = 0;
        
        vector<vector<int>> dp(r, vector<int>(c, 0));
        
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                dp[i][j] = matrix[i][j];
                
                if(i>0 && j>0)
                {
                    if(dp[i][j]==0) continue;
                    
                    dp[i][j] += min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
                }
            }
        }
        
        for(auto a: dp)
        {
            for(auto b: a) res+=b;
        }
        
        return res;
    }
};
