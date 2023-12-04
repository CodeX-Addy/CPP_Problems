#include<iostream>
#include<deque>
using namespace std;

//Sliding window technique
void printFirstNeg(int *arr, int n, int k){
    deque<int> dq;
    
    //First window is processed
    for(int i=0; i<k; i++){
        int e = arr[i];
        if(e<0){
            dq.push_back(i);
        }
    }

    for(int i=k; i<n; i++){
        if(dq.empty()){
            cout << "0 " << " ";
        }
        else{
            cout << arr[dq.front()] << " ";
        }
        
        //removal case
        if(i-dq.front() >= k){
            dq.pop_front();
        }

        //addition case
        if(arr[i] < 0){
            dq.push_back(i);
        }

    
    }
    // last window ans

    if (dq.empty())
    {
        cout << "0 " << " ";
    }
    else
    {
        cout << arr[dq.front()] << " ";
    }
}

int main(){
    int arr[] = {2,-5,4,-1,-2,0,5};
    int k=3;
    int n=sizeof(arr)/sizeof(int);

    printFirstNeg(arr, n, k);
}
