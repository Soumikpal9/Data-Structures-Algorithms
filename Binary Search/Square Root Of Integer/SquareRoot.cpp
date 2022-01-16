int Solution::sqrt(int A){

    if(A==0)    return A;
    long long ans=0;
    long long l=1, r=A;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(mid*mid==A){
            ans=mid;
            return (int)ans;
        }
        else if(mid*mid<A){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return (int)ans;

}