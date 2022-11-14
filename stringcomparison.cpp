class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        /*
        pair unordered map of type string,int 
        for (i to n )
        if (w == s){
            map.insert 
        }
        */
        int cnt = 0, k = 0;
        for(int i=0;i<S.length();i++){
            k = 0;
            for(int j = 0;j<S.length();j++){
                if(S[j] == W[k]){
                    S[j] = '#';
                    k++;
                }
                if(k == W.length()) break;
            }
            if(k == W.length()) cnt++;
        }
        return cnt;
    }