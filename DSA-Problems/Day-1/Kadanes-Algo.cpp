#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxContSum(vector<int>&arr){
    int maxi = INT_MIN;
    int sum = 0;
    for(int it = 0; it<arr.size(); ++it){
        sum += arr[it];
        maxi = max(maxi,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int>arr = {-2,-3,4,-1,-2,1,5,-3};
    cout<<maxContSum(arr);
    return 0;
}
