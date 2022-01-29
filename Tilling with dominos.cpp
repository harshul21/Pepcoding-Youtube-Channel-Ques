//Given 2Xn area and we have to fit tills of area 2Xn in it
int dominos(int n){
    vector<int> dp(n+1);
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
