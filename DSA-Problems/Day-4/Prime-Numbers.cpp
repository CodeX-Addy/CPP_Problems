//Using sieve of Eratosthenes
//Time Complexity: O(NloglogN)
//Space Complexity: O(N)
vector<int> Solution::sieve(int A) {
    vector<int> ans;
    vector<bool> sieve(A + 1, true);
    sieve[0] = sieve[1] = false;
    for(int i=2; i<=A; ++i){
        if(sieve[i]) ans.push_back(i);
        for(int j=i; (long long)j*i<=A; ++j){
            sieve[i*j] = false;
        }
    }
    return ans;
}
