#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int s = 0, e = n - 1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main() {
    int a[5];
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    reverseArray(a, 5);
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    return 0;
}
