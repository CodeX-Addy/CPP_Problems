#include <iostream>
#include<math.h>
using namespace std;
bool isPoweroftwo(int n){
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans==n){
            cout << "Is a power of two"<<endl;
            return true;
        }
    }
    cout << "Not a power of two" << endl;
    return false;
}

int main() {
    int num;
    cin >> num;
    isPoweroftwo(num);
    return 0;
}
