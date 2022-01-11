int Solution::solve(vector<int> &A){

    sort(A.begin(), A.end());
    int steps=0;
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1]){
            steps++;
            A[i]++;
        }
        else if(A[i]<A[i-1]){
            steps=steps+(A[i-1]+1-A[i]);
            A[i]=A[i-1]+1;
        }
    }
    return steps;

}