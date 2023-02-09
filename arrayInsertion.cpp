// Array Insertion
#include<iostream>
using namespace std;
// Code for array traversal
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void indInsert(int arr[], int size, int index, int element){
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}
int main(){
    int arr[5] = {1,5,4,3,6};
    int size=5, element = 2, index = 1;
    display(arr,5);
    indInsert(arr,5,1,2);
//     size = size + 1;
    display(arr,6);
}

