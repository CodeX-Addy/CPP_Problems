#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
  for(int i=0; i<v.size(); ++i){
    cout << "Printing vector: " <<  v[i] << " ";
    //Another way
    // cout << v.at(i) << " ";
  }
  cout << endl;

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





