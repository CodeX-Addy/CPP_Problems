#include<bits/stdc++.h>
using namespace std;

/*

USE CASE 
[10,20,30,40,50,60]
[10,60,20,50,30,40]

*/

void printExtreme(vector<int>&arr){
    int i=0;
    int j = arr.size()-1;
    while(i <= j){
        if(i == j)
            cout << arr[i] << " ";
        else{
            cout << arr[i] << " ";
            cout << arr[j] << " ";
        }
        ++i;
        --j;
    }
}

int main(){
    vector<int>arr = {10,20,30,40,50};
    printExtreme(arr);
}
