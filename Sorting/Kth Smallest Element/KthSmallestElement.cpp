int Solution::kthsmallest(const vector<int> &A, int B){
    vector<int> C = A;
    sort(C.begin(), C.end());
    return C[B-1];
}