int Solution::searchMatrix(vector<vector<int> > &A, int B){

    int i=0, j=A[0].size()-1;
    while(i<A.size() && j>=0){
        if(A[i][j]==B){
            return 1;
        }
        else if(A[i][j]<B){
            i++;
        }
        else{
            j--;
        }
    }
    return 0;

}