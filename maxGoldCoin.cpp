#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int returnMaxCoins(vector<int>&v){
    sort(v.begin(), v.end());
    int maxCoins = 0;
    int buy = 0;
    int free = v.size()-1;
    while(buy<free){
        int buyCoin = v[buy];
        int freeCoin1 = v[free];
        int freeCoin2 = v[free-1];

       

       if(freeCoin2==buyCoin)
           maxCoins+=buyCoin+freeCoin1;
       
       else 
           maxCoins += buyCoin + freeCoin1 + freeCoin2;

        

        ++buy;
        free = free-2;
    }

    return maxCoins;

}
int main(){
    vector<int> v = {5,2,8,6,3,1};
    
    cout << returnMaxCoins(v);
    return 0;
}