#include <iostream>
#include<climits>
using namespace std;
// O(n2)
int firstRepeat(int arr[], int n){
    for(int i=0; i<n; ++i){
        bool isRep = false;
        for(int j=i+1; j<n; ++j){
            if(arr[i] == arr[j]){
                bool isRep = true;
                return i+1;
            }
        }
    }
    return -1;
}

//Refer to leetcode-codestd repo for optimized solution using hash map
