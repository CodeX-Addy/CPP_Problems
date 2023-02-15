#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
    cout << p << endl;
}
int main() {
    int a = 5;
    int *p = &a;
    
    print(p);
    // cout << a << endl;
    // cout << &a << endl;

    return 0;
}
