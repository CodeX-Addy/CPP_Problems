int Solution::sqrt(int A) {
    if (A == 0 || A == 1) {
        return A;
    }

    int s = 1;
    int e = A;
    int ans = 0;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (mid <= A / mid) {
            // If mid*mid is less than or equal to A, update ans and search in the right half
            ans = mid;
            s = mid + 1;
        } else {
            // If mid*mid is greater than A, search in the left half
            e = mid - 1;
        }
    }

    return ans;
}
