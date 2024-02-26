#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factors(int n){
    int cnt = 0;
    for(int i=1; i<=sqrt(n); ++i){
        if(n%i == 0) cnt+=2;
        if(i*i == n) cnt--;
    }
    return cnt;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    cout << factors(n);
    return 0;
}