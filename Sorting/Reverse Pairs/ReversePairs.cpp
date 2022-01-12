long long merge(vector<long long> &A, long long l, long long m, long long r){

    long long p1=l, p2=m, p3=0, i=l, j=m, count=0;
    vector<long long> temp(r-l+1);
    while(i<m && j<=r){
        if(A[i]>2*A[j]){
            count=count+(m-i);
            j++;
        }
        else{
            i++;
        }
    }
    while(p1<m && p2<=r){
        if(A[p1]<=A[p2]){
            temp[p3++]=A[p1++];
        }
        else{
            temp[p3++]=A[p2++];
        }
    }
    while(p1<m){
        temp[p3++]=A[p1++];
    }
    while(p2<=r){
        temp[p3++]=A[p2++];
    }
    for(int i=0;i<r-l+1;i++){
        A[l+i]=temp[i];
    }
    return count;

}

long long revPairs(vector<long long> &A, long long l, long long r){

    if(l==r)    return 0;
    long long mid=l+(r-l)/2;
    long long x=revPairs(A, l, mid);
    long long y=revPairs(A, mid+1, r);
    long long z=merge(A, l, mid+1, r);
    return x+y+z;

}

int Solution::solve(vector<int> &A){

    vector<long long> B;
    for(int i=0;i<A.size();i++){
        B.push_back((long long)A[i]);
    }
    return (int)revPairs(B, 0, B.size()-1);

}