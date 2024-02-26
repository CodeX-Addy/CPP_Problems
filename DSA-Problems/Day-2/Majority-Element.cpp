int Solution::majorityElement(const vector<int> &A) {
    int n = A.size();
    //Brute force approach
    /*
    for(int i=0; i<A.size(); ++i){
        int cnt = 0;
        for(int j=0; j<A.size(); ++j){
            if(A[i] == A[j]) ++cnt;
        }
        
        if(cnt > n/2) return A[i];
    }
    */

    //Optimized approach
    map<int,int>mp;
    for(int i=0; i<A.size(); ++i){
        ++mp[A[i]];
    }
    for(auto it : mp){
        if(it.second > n/2) return it.first;
    }
    return -1;
}
