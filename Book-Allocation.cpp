#include<bits/stdc++.h>
using namespace std;

bool isPossible(int A[], int N, int M, int sol){
    int page = 0;
    int cnt = 1;
    for(int i=0; i<N; i++){
        if(A[i] > sol)
            return false;
        if(page + A[i] > sol){
            cnt++;
            page = A[i];
            if(cnt > M)
                return false;
        
        }
        else{
            page += A[i];
        }
    }
    return true;
}

int findPages(int A[], int N, int M){
    if(M>N)
        return -1;
    int ans = -1;
    int s = 0;
    int e = accumulate(A, A+N, 0);
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossible(A, N, M, mid)){
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
    int N = sizeof(A)/sizeof(A[0]);
    int M = 2;
    cout<<findPages(A, N, M);

}
