int Solution::solve(vector<int> &A, int B) {
    map<int,int> mp;
    int cnt = 0;
    for(int i=0; i<A.size(); ++i){
        cnt += mp[A[i]^B];
        mp[A[i]]++;
    }
    return cnt;
}
