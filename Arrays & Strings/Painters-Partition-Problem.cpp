#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int time = 0;
    int cnt = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > mid) return false;
        if(time + arr[i] > mid){
            ++cnt;
            time = arr[i];
            if(cnt > k) return false;
        }
        else{
            time += arr[i];
        }
    }
    return true;
}

int minTime(int arr[], int n, int k){
    int s = 0;
    int e = accumulate(arr, arr + n, 0);
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
  
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int A[] = {12, 34, 67, 90};
    int N = sizeof(A) / sizeof(A[0]);
    int M = 2;
    cout << minTime(A, N, M);
}
