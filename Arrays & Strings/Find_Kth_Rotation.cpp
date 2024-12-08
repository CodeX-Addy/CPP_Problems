class Solution {
  public:
    
    int search(vector<int>arr, int target){
        for(int i=0; i<arr.size(); ++i){
            if(arr[i] == target)
                return i;
        }
        return -1;
    }
    
    int findKRotation(vector<int> &arr) {
        vector<int>a = arr;
        sort(arr.begin(), arr.end());
        int firstelement = arr[0];
        int firstIndex = search(a, firstelement);
        return firstIndex - 0;
    }
};
