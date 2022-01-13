long long mod=1000000007;

long long power(long long x, long long y){

    if(y==0)    return 1;
    long long temp;
    temp=power(x, y/2)%mod;
    if(y%2==0){
        return (temp*temp)%mod;
    }
    else{
        return (((x*temp)%mod)*temp)%mod;
    }

}

int Solution::solve(vector<int> &A){

    vector<long long> B;
    for(int i=0;i<A.size();i++){
        B.push_back((long long)A[i]);
    }
    sort(B,begin(), B.end());
    long long maxSum=0, minSum=0, sum=0;
    for(int i=0;i<B.size();i++){
        maxSum=maxSum+(B[i]*(power(2LL, (long long)i)))%mod;
        minSum=minSum+(B[i]*(power(2LL, (long long)(B.size()-i-1))))%mod;
    }
    sum=(maxSum-minSum)%mod;
    if(sum<0){
        sum+=mod;
    }
    return sum;

}