int Solution::solve(vector<int> &A, int B){

    if(A.size()==0 || B==0) return 0;
    sort(A.begin(), A.end());
    int minm=A[B-1]-A[0];
    for(int i=0;i<=A.size()-B;i++){
        minm=min(minm, (A[i+B-1]-A[i]));
    }
    return minm;

}