int maxSum(vector<int> arr){
    int inc=arr[0];
    int exc;

    for(int i=1;i<arr.size();i++){
        int ninc=exc+arr[i];
        int nexc=max(inc,exc);

        inc=ninc;
        exc=nexc;
    }
    return max(inc,exc);
}
