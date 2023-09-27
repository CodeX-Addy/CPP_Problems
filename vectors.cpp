#include <iostream>
#include<vector>
using namespace std;

//Printing a vector
void print(vector<int>v){
  for(int i=0; i<v.size(); ++i){
    cout << "Printing vector: " <<  v[i] << " ";
    //Another way
    // cout << v.at(i) << " ";
  }
  cout << endl;

  //Another way to print
  void print(vector<int> v){
    for(auto it:v){
        cout << it << " ";
    }
}
}
int main() {
  vector<int>v;
  // First way to push elements in vector
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // v.push_back(4);

  //another way to push elements through loop
  int n; cin >> n;
  for(int i=0; i<n; ++i){
    int d;
    cin >> d;
    v.push_back(d);
  }
  //before pop operation
  print(v);
  // pop operation
  // v.pop_back();

  //Dynamic nature of vector
  for(int i=0; i<10; ++i){
    v.push_back(20);
  }

  print(v);

  return 0;
}

//Different ways to initialise a vector
#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); ++i){
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main() {
    vector<int> v = {1,2,3,4,5};
    vector<int> v1(5, -1);
    vector<int> v2{6,7,8,9,10};
    print(v1);
    
    v1.pop_back();
    print(v1);
    
    v1.push_back(2);
    print(v1);
    print(v2);

    return 0;
}

//2D Vector
#include<iostream>
#include<vector>
using namespace std;

 vector<vector<int> > arr(5, vector<int>(5,8));//Initialization
  for(int i=0; i<arr.size(); ++i){//Upto rows
    for(int j=0; j<arr[i].size(); ++j){ //Upto Columns
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}




