#include <iostream>
using namespace std;

void printCount(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    printCount(num);

    return 0;
}
