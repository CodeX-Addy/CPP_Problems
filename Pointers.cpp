#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int *p = &num;
    
    //cout << *p;
    cout << &num << endl; // Gives the address of num 
    cout << p << endl;  // It also gives the address of num
    cout << num << endl; // Gives the value as it is
    cout << *p << endl;  // It also gives the value of num as it is
    
    cout << sizeof(num) << endl;
    cout << sizeof(p) << endl;
    int *p = &num; //*p has the value same value as of num
    *p = (*p)*10; // 10 is multiplied with the value of num i.e. 5
    cout << num << endl;
    cout << *p << endl;
    int * p = NULL; // Initializing null pointer
    cout << "The value of above pointer is " << *p;
    
    int arr[5] = {1,2,3,4,5};
   //arr = arr + 1; //It throws an ERROR! It cannot be possible to change the address of very first location
    int *p = &arr[0];
    cout << p << endl;
    p = p + 1;// It is okay to implement and it will point to the next address location
    cout << p << endl;
    
    return 0;
}
