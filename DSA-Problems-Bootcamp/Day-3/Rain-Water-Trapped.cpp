int Solution::trap(const vector<int> &A) {
    int n = A.size();
    if (n <= 2) {
        return 0;  // No trapping is possible with less than 3 elements
    }

    int t = A[0];
    int ind = 0;
    for (int i = 1; i < n; ++i) {
        if (A[i] > t) {
            t = A[i];
            ind = i;
        }
    }

    int ans = 0;
    int mL = A[0];

    // Calculate trapped water to the left of the highest bar
    for (int i = 0; i < ind; ++i) {
        ans += max(min(t, mL) - A[i], 0);
        mL = max(mL, A[i]);
    }

    int mR = A[n - 1];

    // Calculate trapped water to the right of the highest bar
    for (int i = n - 2; i > ind; --i) {
        ans += max(min(t, mR) - A[i], 0);
        mR = max(mR, A[i]);
    }

    return ans;
}
