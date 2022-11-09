class Solution{

  public:
  vector<vector<int>> dp;
    int dpHelper(int i, int curSum , int &totalSum , int arr[] , int n){
        if(i == n){
            return abs(totalSum - 2*curSum);
        }
        if(dp[i][curSum] != -1)return dp[i][curSum];
        int op1 = dpHelper(i + 1, curSum + arr[i], totalSum , arr , n);
        int op2 = dpHelper(i + 1, curSum , totalSum , arr , n);
        return dp[i][curSum] = min(op1,op2);
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	       sum += arr[i];
	    }
	    dp.resize(n , vector<int>(sum, -1));
	    return dpHelper(0,0,sum,arr,n);
	} 
};
