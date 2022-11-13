 
 #include<iostream>
 #include<vector>
 #include<algorithm>
 
 using namespace std;


 
 
 int totalWays(int n, vector<int>capacity) {
        sort(capacity.begin(),capacity.end());

        long mod = 1000000007;

        long long ans  = capacity[0];

        for(int i=1;i<n;i++)

        {

            ans=(ans*(capacity[i]-i))%mod;

        }

        return ans;
    
    }
