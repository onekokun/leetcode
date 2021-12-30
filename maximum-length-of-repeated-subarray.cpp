class Solution {
public:
    int dp[1001][1001];
    
    int solve(vector<int> &nums1, vector<int> &nums2, int m, int n)
    {
        int res = 0;
        
        for(int i=1;i<=m;++i)
        {
            for(int j=1;j<=n;++j)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                    res = max(res, dp[i][j]);
                }
                
                else dp[i][j] = 0;
            }
        }
        
        return res;
    }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        memset(dp, 0, sizeof(dp));
    
        int m = nums1.size(), n = nums2.size();
        
        return solve(nums1, nums2, m , n);
    }
};
