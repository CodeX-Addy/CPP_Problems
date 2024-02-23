#include <iostream>
#include<vector>
using namespace std;
//Using 2 pointer approach
//To find the diff by k
bool isDiff(vector<int> &arr, int k){
  if(arr.size() <= 1) return 0;
  int f = 0, s = 1;
  while(f<s){
    if(arr[s] - arr[f] == k) return 1;
    if(arr[s] - arr[f] > k) ++f;
    else ++s;
  }
  return 0;
}
int main() {
    vector<int> arr = {1,10,16,32,61};
    bool ans = isDiff(arr,16);
    if(ans) cout << "Diff is present" << endl;
    else cout << "Diff is not present" << endl;
}
