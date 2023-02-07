#include <iostream>
using namespace std;

void display(int arr[][4], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
}

int main() {
    int arr[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    
    display(arr,3,4);

    
}
