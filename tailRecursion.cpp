#include<iostream>
using namespace std;

void printN(int n){
    if(n<0)
     return;
    cout << n << " "; 
    printN(n-1);
}
int main(){
    printN(10);
}
// Output- 10 9 8 7 6 5 4 3 2 1 0
