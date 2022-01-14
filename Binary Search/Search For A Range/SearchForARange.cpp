vector<int> Solution::searchRange(const vector<int> &A, int B){

    vector<int> ans;
    if(A.size()==1){
        ans.push_back(0);
        ans.push_back(0);
        return ans;
    }
    int start=-1, end=-1;
    int l=0, r=A.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(A[mid]==B){
            start=mid;
            r=mid-1;
        }
        else if(A[mid]<B){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    l=0, r=A.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(A[mid]==B){
            end=mid;
            l=mid+1;
        }
        else if(A[mid]<B){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    ans.push_back(start);
    anms.push_back(end);
    return ans;

}