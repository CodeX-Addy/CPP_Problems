#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){// Bubble sort function
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1])
             swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int arr[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr,5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
