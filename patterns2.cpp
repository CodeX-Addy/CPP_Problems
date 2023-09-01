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
