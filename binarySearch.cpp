#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e - s)/2;
    while(s<=e){
        // Base condition
        if(arr[mid]==key)
         return mid;
         
        if(arr[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1; // Indicates the key is not present
    
}

int main() {
    int a[5] = {2,5,6,7,8}; //Should be sorted
    int k;
    cout << "Enter the key to be searched "<<endl;
    cin >> k;
    int ind = binarySearch(a,5,k);
    cout << "The key is present at the index "<< ind;

    return 0;
}
