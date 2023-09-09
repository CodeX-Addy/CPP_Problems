//Solid half diamond
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
*
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;


  for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
      cout << "* ";
    }
    cout << endl;

  }
  for(int i=0; i<n; i++){
      for(int j=0; j<n-i-1; j++){
        cout << "* ";
      }
      cout << endl;
    }
}

//Hollow inverted pyramid
*                 * 
 *               * 
  *             * 
   *           * 
    *         * 
     *       * 
      *     * 
       *   * 
        * * 
         * 
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      cout << " ";
    }
    for(int j=0; j<n-i; j++){
      if(j==0 || j==n-i-1){
        cout << "* "; 
      }
      else{
        cout << "  ";
      }
    }
    cout << endl;
  }
  
}

//Floyd's triangle
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 
// 22 23 24 25 26 27 28 
// 29 30 31 32 33 34 35 36 
// 37 38 39 40 41 42 43 44 45
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cnt = 1;

  for(int i=0; i<n; i++){
    for(int j=0; j<i; j++){
      cout << cnt << " ";
      cnt++;
    }
    cout << endl;
  }
}

//Butterfly pattern
*         *
**       **
***     ***
****   ****
***** *****
***** *****
****   ****
***     ***
**       **
*         *
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        for(int k=0; k<2*n-2*i-1; k++){
        cout << " ";
      }
      for(int j=0; j<i+1; j++){
          cout << "*";
      }
      cout << endl;
    
     }
     for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        for(int k=0; k<2*i+1; k++){
        cout << " ";
      }
      for(int j=0; j<n-i; j++){
          cout << "*";
      }
      cout << endl;
    
      
    }
    return 0;
}

//A fancy pattern
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<2*i+1; j++){
            if(j%2 == 1){
                cout << "*";
            }
            else{
                cout << i+1;
            }
        }
        cout << endl;
    }

    return 0;
}


//Numeric palindrome equilateral pyramid
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k=n;
    for(int i=0; i<n; ++i){
        int c=1;
        for(int j=0; j<k; j++){
            if(j<n-i-1){
                cout << " ";
            }
            else if(j<=n-1){
                cout << c;
                c++;
            }
            else if(j==n){
                c = c-2;
                cout << c;
                c--;
            }
            else{
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
    return 0;
}
