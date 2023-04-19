#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > max)
         max = arr[i];
    }
    return max;
}
void countSort(int arr[], int n){
    int k = getMax(arr, n);
    int count[k+1], b[n];
  
    // Initialising count array with 0
    for(int i=0; i<n; i++){
        count[i] = 0;
    }
    // Updating count array on the basis of occurence of elements
    for(int i=0;i<n; i++){
        count[arr[i]]++;
    }
    // Updating the count array 
    for(int i=1; i<=k; i++){
        count[i] = count[i] + count[i-1];
    }
    
    for(int i=n-1; i>=0; i--){
        b[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    
    // Copying the values
    for(int i=0; i<n; i++){
        arr[i] = b[i];
    }
}

int main() {
    int arr[] = {3,3,0,1,0,0,0,0,2};
    int n = 9;
    countSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0
}
