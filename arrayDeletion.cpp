#include <iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement(int arr[], int size, int index){
    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    
}
int main() {
    int arr[5] = {1,2,3,4,5},size=5;
    display(arr,size);
    deleteElement(arr,size,2);
    size = size - 1
    display(arr,size);
    return 0;
}
