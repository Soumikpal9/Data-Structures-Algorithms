bool comp(string a, string b){

    if(a+b>b+a){
        return true;
    }
    else{
        return false;
    }

}

string Solution::largestNumber(const vector<int> &A){

    vector<string> X;
    for(int i=0;i<A.size();i++){
        X.push_back(to_string(A[i]));
    }

    sort(X.begin(), X.end(), comp);

    string ans="";
    for(int i=0;i<X.size();i++){
        ans+=X[i];
    }

    if(X[0]=="0"){
        return "0";
    }
    else{
        return ans;
    }

}