int rearrange(vector<int> &A, int l, int r){

    int p1=l+1, p2=r;
    while(p1<=p2){
        if(A[p1]<=A[l]){
            p1++;
        }
        else if(A[p2]>A[l]){
            p2--;
        }
        else{
            swap(A[p1], A[p2]);
            p1++;
            p2--;
        }
    }
    swap(A[l], A[p1-1]);
    return p1-1;

}

void quickSort(vector<int> &A, int l, int r){

    if(l>=r)    return;
    int ind=rearrange(A, l, r);
    quickSort(A, l, ind-1);
    quickSort(A, ind+1, r);

}

vector<int> Solution::solve(vector<int> &A){

    quickSort(A, 0, A.size()-1);
    return A;

}