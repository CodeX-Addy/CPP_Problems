// Online C++ compiler to run C++ program online
//void pointers
#include <iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>> v){
    int row = v.size();
    int col = v[0].size();
    
    for(int stCol=0; stCol<col; ++stCol){
        if((stCol&1) == 0){
            for(int i=0; i<row; ++i){
                cout << v[i][stCol] << " ";
            }
        }
        else{
            for(int i=row-1; i>=0; --i){
                cout << v[i][stCol] << " ";
            }
        }
    }
}

int main(){
    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    wavePrint(v);
}

