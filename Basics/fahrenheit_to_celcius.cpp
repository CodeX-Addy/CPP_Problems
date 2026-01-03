#include<iostream>
using namespace std;

int main(){
    
    int f_max = 10;
    
    int f_min = 1;
    
    while(f_min <= f_max){
        double c_temp = 5.0*(f_min - 32) / 9;
        cout << c_temp << endl;
        f_min = f_min + 1;
    }
}
