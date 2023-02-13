#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *p = &num;
    
    //cout << *p;
    cout << &num << endl; // Gives the address of num 
    cout << p << endl;
    cout << num << endl; // Gives the value as it is
    cout << *p << endl;
    
    cout << sizeof(num) << endl;
    cout << sizeof(p) << endl;
    int *p = &num;
    *p = (*p)*10;
    cout << num << endl;
    cout << *p << endl;
    int * p = NULL;
    cout << "The value of above pointer is " << *p;
    
    return 0;
}
