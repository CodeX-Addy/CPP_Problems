// Make a number from the digits
#include<iostream>
using namespace std;

int main(){
    
    int n;
    int ans = 0;
    
    while(true){
        cin >> n;
        if(n == -1)
            break;
            
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    cout << ans << endl;
}
