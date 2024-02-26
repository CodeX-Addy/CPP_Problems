int Solution::diffPossible(vector<int> &A, int B) {
    if(A.size()<=1) return 0;
    int f = 0, s = 1;
    while(s<A.size()){
        if(A[s] - A[f] == B) return 1;
        if((A[s] - A[f]) > B) ++f;
        else ++s;
        
        if(f == s) ++s; 
    }
    return 0;
}
