#include <iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > max)
         max = arr[i];
    }
    return max;
}
int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < min)
         min = arr[i];
    }
    return min;
}

int main() {
    int size;
    int a[100];
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> a[i];
    }
    cout << "The maximum element is " << getMax(a,size)<<endl;
    cout << "The minimum element is " << getMin(a,size)<<endl;
    return 0;
}
