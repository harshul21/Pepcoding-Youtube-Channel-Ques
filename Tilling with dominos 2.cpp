//Tilling with MX1 tiles
//Floor is of the dimensions MXN
int dominos(int m,int n){
    vector<int> dp(n+1);
    for(int i=1;i<=n;i++){
        if(i<m){
            dp[i]=i;
        }
        else if(i==m){
            dp[i]=2;
        }
        else{
            dp[i]=dp[i-1]+dp[n-m];
        }
    }
    return dp[n];
}
