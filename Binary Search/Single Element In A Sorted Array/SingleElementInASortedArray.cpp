int Solution::solve(vector<int> &A){

    int l=0, r=A.size()-1;
    while(l<=r){
        int  mid=l+(r-l)/2;
        if(mid>0 && mid<A.size()-1){
            if(A[mid]!=A[mid-1] && A[mid]!=A[mid+1]){
                return A[mid];
            }
        }
        if(mid==0){
            if(A[mid]!=A[mid+1]){
                return A[mid];
            }
        }
        if(mid==A.size()-1){
            if(A[mid]!=A[mid-1]){
                return A[mid];
            }
        }
        if(mid>0){
            if(A[mid-1]==A[mid]){
                mid=mid-1;
            }
        }
        if(mid%2==0){
            // ignore left part
            l=mid+1;
        }
        else{
            // ignore right part
            r=mid-1;
        }
    }

}