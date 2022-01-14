int Solution::solve(vector<int> &A){

    if(A.size()==1) return A[0];
    if(A[0]>A[1])   return A[0];
    if(A[A.size()-1]>A[A.size()-2]) return A[A.size()-1];
    int l=0, r=A.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(A[mid]>A[mid-1] && A[mid]>=A[mid+1]){
            return A[mid];
        }
        else if(A[mid]>A[mid-1] && A[mid]<A[mid+1]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

}