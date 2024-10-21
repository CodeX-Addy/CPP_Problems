//TO DO
#include<iostream>
#include<vector>
using namespace std;

int countPairs(vector<int> &arr, int k){
    int cnt = 0;
    for(int i=0; i<arr.size(); ++i){
        for(int j=i+1; j<arr.size(); ++j){
            if((arr[i]+arr[j])%k == 0) ++cnt;
        }
    }
    return cnt;
}
int main(){
    vector<int> arr = {2, 2, 1, 7, 5, 3};
    int k = 4;

    int ans = countPairs(arr, k);
    cout << ans;
}