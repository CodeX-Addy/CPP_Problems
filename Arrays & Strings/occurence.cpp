//This program is finding the first occurence of an element
#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main() {

    int arr[] = {10,20,30,30,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    
    int ans = firstOccur(arr, n, 30);
    cout << ans << endl;
    return 0;
}

//This program is finding the last occurence of an element
#include <iostream>
using namespace std;
int lastOccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main() {

    int arr[] = {10,20,30,30,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    
    int ans = lastOccur(arr, n, 30);
    cout << ans << endl;
    return 0;
}

//write a program to find the total occurence of an element
#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int lastOccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int totalOccur(int arr[], int n, int target){
        int first = firstOccur(arr, n, target);
        int last = lastOccur(arr, n, target);
        int sol = last-first + 1;
        return sol;
}

int main() {

    int arr[] = {10,20,30,30,30,40,40,40,40,50};
    int n = sizeof(arr)/sizeof(int);
    
    int ans = totalOccur(arr, n, 30);
    cout << ans << endl;
    return 0;
}
