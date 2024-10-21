class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    //vector<int> ans;
	    set<int> s;
	    int num = 2;
	    while(N>1){
	        if(!(N%num)){
	            s.insert(num);
	            N = N/num;
	        }
	        else ++num;
	    }
	    vector<int> ans(s.begin(), s.end());
	    return ans;
	}
};