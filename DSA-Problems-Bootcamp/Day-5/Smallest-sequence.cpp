vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> ans;
    int a=0,b=0,c=0;
    ans.push_back(1);
    for(int i=0; i<D; ++i){
        int num = min({A*ans[a], B*ans[b], C*ans[c]});
        ans.push_back(num);
        
        if((A*ans[a]) == num) ++a;
        if((B*ans[b]) == num) ++b;
        if((C*ans[c]) == num) ++c;
    }
    ans.erase(ans.begin());
    return ans;
}