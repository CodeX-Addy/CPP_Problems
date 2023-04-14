#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int s=0,e=n-1,mid=0;
   while(mid<=e){
      if(arr[mid]==0){
         arr[mid] = arr[s];
         arr[s] = 0;
         s++;
         mid++;
      }
      else if(arr[mid]==1)
      mid++;
      else if(arr[mid]==2){
         arr[mid] = arr[e];
         arr[e] = 2;
         e--
      }
   }
}
