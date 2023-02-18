#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
  int pivot = arr[s];
  int cnt = 0;
  for(int i=s+1; i<=e; i++){
    if(arr[i]<=pivot)
      cnt++;
  }

  int pivotIndex = s + cnt;
  swap(arr[pivotIndex], arr[s]);

  int i=s, j=e;
  while(i<pivotIndex && j>pivotIndex){
    while(arr[i] < pivotIndex){
      i++;
    }
    while(arr[j] > pivotIndex){
      j--;
    }
    if(arr[i] > pivotIndex && arr[j] < pivotIndex){
      swap(arr[i],arr[j]);
    }
  }
  return pivotIndex;
}

void quickSort(int arr[], int s, int e){
  if(s>=e)
    return;
  int p = partition(arr,s,e);
  quickSort(arr, s, p-1);
  quickSort(arr,p+1,e);
}

int main() {
  int arr[5] = {5,0,3,8,1};
  int n = 5;
  quickSort(arr,0,n-1);
  for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
  }cout << endl;
}
