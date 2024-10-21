int Solution::solve(vector<int> &A) {
    int s = 0;
    int e = A.size()-1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        if ((mid == 0 || A[mid] >= A[mid - 1]) && (mid == A.size() - 1 || A[mid] >= A[mid + 1])) {
            return A[mid];
        }
        else if(A[mid] < A[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;
}
