int Solution::solve(int A, int B, int C) {

        long long mod=1e9+7;
        long long lcm = (B*C)/__gcd(B,C);
        long long l=min(B,C) , r=A*1LL*min(B,C);
        long long ans = 0;
        while(l<=r){
            long long mid = (l + (r-l)/2);
            long long position_check = mid/B + mid/C - mid/lcm ;
            if(position_check < A) l = mid +1 ;
            else {
             ans=mid%mod;
             r=mid-1;
         }
        }
        return ans;
        
}
