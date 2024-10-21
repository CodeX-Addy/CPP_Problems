#include <iostream>
using namespace std;

int main() {
    int a[10],b[10],c[10], i, j, k, n1, n2;
    cout << "Enter no. of elements of first array:" << endl;
    cin >> n1;
    for(i=0; i<n1; i++){
        cin >> a[i];
    }
    cout << "Enter no. of elements of second array:" << endl;
    cin >> n2;
    for(i=0; i<n2; i++){
        cin >> b[i];
    }
    
    // Intersection operation
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(a[i]==b[j]){
                c[k] = a[i];
                k++;
            }
        }
    }
    cout << "The intersection will be" << endl;
    for(i=0; i<k; i++){
        cout << c[i] << " ";
    }
    return 0;
}
