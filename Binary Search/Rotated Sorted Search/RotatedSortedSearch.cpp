int Solution::search(const vector<int> &A, int B){

    int l=0, r=A.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(A[mid]==B){
            return mid;
        }
        else if(A[l]<=A[mid]){
            if(B>=A[l] && B<=A[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(B<=A[r] && B>=A[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    }
    return -1;

}