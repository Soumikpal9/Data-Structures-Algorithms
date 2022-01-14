int Solution::searchInsert(vector<int> &A, int B){

    int l=0, r=A.size()-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(A[mid]==B){
            return mid;
        }
        else if(A[mid]<B){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(A[mid]<B){
        return mid+1;
    }
    else{
        return mid;
    }

}