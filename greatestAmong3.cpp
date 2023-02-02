#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cout << "Enter number 1: ";
  cin >> a;
  cout << "Enter number 2: ";
  cin >> b;
  cout << "Enter number 3: ";
  cin >> c;
  
  a>b?(a>c? cout << "Number 1 is greater":cout <<"Number 3 is greater"):(b>c? cout<<"Number 2 is greater": cout << "Number 3 is greater");
}
