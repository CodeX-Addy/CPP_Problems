// Syntax overview
#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number" << endl;
    
  // User can input an integer
  cin >> a; 
  cout << "User entered number " << a << endl;
}

// Arithmetic operators
#include <iostream>
using namespace std;
int main()
{
  int a = 5;
  int b = 10;
  
  cout << "Sum of a and b is" << 
          " " << a + b << endl;
  cout << "Difference of b and a is" << 
          " " << b - a << endl;
  cout << "Multiplication of a and b is" << 
          " " << a * b << endl;
  cout << "Division of b and a is" << 
          " " << b / a << endl;
  cout << "Modulo of b and a is" << 
          " " << b % a << endl;
  return 0;
}

// Relational operators
#include <iostream>
using namespace std;
int main()
{
  int a = 5;
  int b = 10;
  
  if (a == b)
  {
    cout << "a==b is not equal to true" << endl;
  }
    
  if (a != b) 
  {
    cout << "a != b is true" << endl;
  }
  if (a > b)
  {
    cout << "a > b is not true" <<
             endl;
  }
    
  if (a < b)
  {
    cout << "a < b is true" << endl;
  }
    
  if (a >= b)
  {
    cout << "a >= b is not true" << endl;
  }
    
  if (a <= b)
  {
    cout << "a <= b is true" << endl;
   }
  return 0;
}
