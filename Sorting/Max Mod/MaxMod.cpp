int Solution::solve(vector<int> &A){

    sort(A.begin(), A.end());
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]!=A[i-1]){
            return A[i-1];
        }
    }

    return 0;

}