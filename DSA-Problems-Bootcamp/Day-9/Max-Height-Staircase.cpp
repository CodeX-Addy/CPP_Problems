#include<iostream>
using namespace std;

int staircase(int n){
      int s = 0, e = n;
        int ans = 0;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            long long sum = mid*(mid+1)/2;
            if(sum == n){
            return mid;
            }
            if(sum < n){
            ans = mid;
            s = mid + 1;
            }
            else e = mid - 1;
        }
        return ans;
}

int main(){
    int n;cin>>n;
    int ans = staircase(n);
    cout << ans << endl;
}