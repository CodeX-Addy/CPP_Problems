vector<int> Solution::plusOne(vector<int> &A) {
    while(A.size()>0 && A[0] == 0){
        A.erase(A.begin());
    }
    
    int carry = 1;
    for(int i=A.size()-1; i>=0; --i){
        if(!carry) break;
        A[i] += 1;
        A[i] = A[i]%10;
        carry = carry/10;
    }
    
    if(carry==1){
        A.insert(A.begin(), 1);
    }
    return A;
}
