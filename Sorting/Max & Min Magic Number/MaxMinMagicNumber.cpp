vector<int> Solution::solve(vector<int> &A){

    long long mod=1000000007;
    sort(A.begin(), A.end());
    long long max=0, min=0;
    vector<int> ans;
    for(int i=0;i<A.size();i+=2){
        min=min+(abs((long long)A[i]-(long long)A[i+1]))%mod;
    }
    for(int i=0;i<A.size()/2;i++){
        max=max+(abs((long long)A[i]-(long long)A[A.size()-1-i]))%mod;
    }
    max%=mod;
    min%=mod;
    ans.push_back(max);
    ans.push_back(min);
    return ans;

}