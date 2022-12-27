#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
         return i;
    }
    return -1; // Indicates that the key is not present 
}

int main() {
    int a[10], n = 10, k;
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    cout << "Enter the key to be search "<<endl;
    cin >> k;
    int ind = linearSearch(a,n,k);
    cout << "The key is present at index " << ind;

    return 0;
}
