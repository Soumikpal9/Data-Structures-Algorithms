bool check(vector<int> &A, int k, int B){
    long long sum=0;
    for(int i=0;i<k;i++){
        sum+=(long long)A[i];
    }
    if(sum>(long long)B){
        return false;
    }
    for(int i=k;i<A.size();i++){
        sum+=(long long)A[i]-(long long)A[i-k];
        if(sum>(long long)B){
            return false;
        }
    }
    return true;
}

int Solution::solve(vector<int> &A, int B){

    int l=1, r=A.size();
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(check(A, mid, B)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;

}