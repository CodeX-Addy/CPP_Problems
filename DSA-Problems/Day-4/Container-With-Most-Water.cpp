int Solution::maxArea(vector<int> &A) {
    int f=0,l=A.size()-1;
    int ans = 0;
    while(f < l){
        ans = max(ans, (l-f)*(min(A[f], A[l])));
        if(A[f] < A[l]){
            ++f;
        }
        else --l;
    }
    return ans;
}
