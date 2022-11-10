class Solution {
    static long jumpingNums(long X) {
        // code here
        Queue<Long> queue = new ArrayDeque<>();
        
        for(long i=1; i<10; i++) queue.add(i);
        
        long ans = 0;
        
        while(true)
        {
            long x = queue.poll();
            
            
            if(x==X) return X;
            else if(x>X) break;
            
            long num1 = x*10 + (x%10-1);
            long num2 = x*10 + (x%10+1);
            
            if(x%10>0) queue.add(num1); 
            if(x%10<9) queue.add(num2);
            
            ans = x;
        }
        
        return ans;
        
    }
};