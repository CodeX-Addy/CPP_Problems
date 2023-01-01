#include <iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        cout << "Odd number" << endl;
        return 0;
    }
    cout << "Even number" << endl;
    return 1;
}

int main() {
    int num;
    cin >> num;
    isEven(num);
    return 0;
}
