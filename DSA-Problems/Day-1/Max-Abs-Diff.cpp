#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int Solution::maxArr(vector<int> &A) {
    
    int max1 = INT_MIN;
    int min1 = INT_MAX;
    int max2 = INT_MIN;
    int min2 = INT_MAX;
    //Processing first step
    
    for(int i=0; i<A.size(); ++i){
        int val1 = A[i] + i;
        if(val1>max1) max1 = val1;
        if(val1<min1) min1 = val1;
        
        int val2 = A[i] - i;
        if(val2>max2) max2 = val2;
        if(val2<min2) min2 = val2;
        
    }
    
    
    return max(max1-min1, max2-min2);
    
    //Brute force approach
    /*
    int maxDiff = INT_MIN;
    
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A.size(); j++){
            int absolute = abs(A[i]-A[j]) + abs(i-j);
            if(absolute>maxDiff) maxDiff = absolute;
        }
    }
    return maxDiff;
    */
    
}
