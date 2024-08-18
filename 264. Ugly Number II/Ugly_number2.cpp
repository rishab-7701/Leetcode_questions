class Solution {
public:
    int nthUglyNumber(int n) {
      vector<int>dp(n);
      dp[0]=1;
      int p1 = 0;
      int p2 = 0;
      int p3 = 0 ;

      for(int i=1;i<n;i++){
        int twomultiple = dp[0]*2; // 1*2=2
        int threemultiple = dp[0]*3; // 1*3=3
        int fivemultiple = dp[0]*5; // 1*5=5

        dp[i] = min(twomultiple(min(threemultiple,fivemultiple)));

        if(twomultiple==dp[i]) p1++;
        if(threemultiple==dp[i]) p2++;
        if(fivemultiple==dp[i]) p3++;
      }
      return dp[n-1];
    }
};