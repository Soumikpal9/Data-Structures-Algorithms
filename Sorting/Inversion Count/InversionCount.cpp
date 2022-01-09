int mod=1000000007;

int merge(vector<int> &A, int l, int m, int r){

    int p1=l, p2=m, p3=0, count=0;
    vector<int> temp(r-l+1);

    while(p1<m && p2<=r){
        if(A[p1]<=A[p2]){
            temp[p3++]=A[p1++];
        }
        else{
            temp[p3++]=A[p2++];
            count=(count+(m-p1))%mod;
        }
    }
    while(p1<m){
        temp[p3++]=A[p1++];
    }
    while(p2<=r){
        temp[p3++]=A[p2++];
    }
    for(int i=0;i<r-l+1;i++){
        A[l+i]=temp[i];
    }

    return count%mod;

}

int inversionCount(vector<int> &A, int l, int r){

    if(l==r){
        return 0;
    }
    
    int mid=l+(r-l)/2;
    int x=inversionCount(A, l, mid);
    int y=inversionCount(A, mid+1, r);
    int z=merge(A, l, mid+1, r);

    return (x+y+z)%mod;

}

int Solution::solve(vector<int> &A) {
    return inversionCount(A, 0, A.size()-1);
}