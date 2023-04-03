// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    long long int n,k;
    int sum = 0;
    cin >> n >> k;
    for(int i=0; i<=n; i++){
        sum+=i;
        if(sum-1 == k)
         break;
    }
    cout << sum;
    

    return 0;
}
