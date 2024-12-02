vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    
    // Find the repeating number
    int repeating = -1;
    for(int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if(arr[index] > 0)
            arr[index] = -arr[index];
        else
            repeating = abs(arr[i]);
    }
    
    // Find the missing number
    int missing = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            missing = i + 1;
            break;
        }
    }
    
    return {repeating, missing};
}
