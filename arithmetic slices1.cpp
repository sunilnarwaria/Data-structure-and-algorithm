
 int numberOfArithmeticSlices(vector<int>& a) {
         
        int n = a.size();
       vector<int>dp(n+1,0);
        int ans =0;
        for(int i = 2;i<n;i++)
        {
            if((a[i]-a[i-1]) == (a[i-1] - a[i-2]))
            {
               dp[i] = dp[i-1] +1;
                
            }
            else{
                dp[i]  = 0;
            }
            ans += dp[i];
        }
        return ans;
    }
