#include <iostream>
#include<climits>
using namespace std;

int reverse(int x){
    int ans=0;
    while(x!=0){
        int dig = x%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
         return 0;
        ans = (ans*10) + dig;
        x = x/10;
    }
    return ans;
}
int main() {
    int num;
    cin >> num;
    cout << "The reverse of this integer is " << reverse(num);
    return 0;
}
