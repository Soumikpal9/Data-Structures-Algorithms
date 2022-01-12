bool comp(vector<int> &p1, vector<int> &p2){

    int d1=p1[0]*p1[0]+p1[1]*p1[1];
    int d2=p2[0]*p2[0]+p2[1]*p2[1];
    if(d1<=d2){
        return true;
    }
    return false;

}

vector<vector<int> > Solution::solve(vector<vector<int> > &A, int B) {

    sort(A.begin(), A.end(), comp);
    vector<vector<int>> ans;
    for(int i=0;i<B;i++){
        ans.push_back(A[i]);
    }
    return ans;

}