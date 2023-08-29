// Various patterns related questions using while loop
// Problem - 01
*****
*****
*****
*****
*****
// Code:-
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

// Problem - 02
//  1111
//  2222
//  3333
//  4444
// Code:-
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}


// Problem - 03
// 4321
// 4321
// 4321
// 4321
  
// Code:-
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << n-j+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

// Problem-04
// 123
// 456
// 789
  
//   Code:-
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

// Problem-05
// *
// **
// ***
// ****

// Code:-
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    
    while(i<=n){
        int j = 1;
        while(j<=i){
            
            cout <<  "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

//Using for loop
// 1
// 12
// 123
// 1234
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    for(int i=0; i<n;++i){
        for(int j=0; j<i+1; ++j){
            cout << j+1;
            
        }
        cout << endl;
    }

    return 0;
}

//Hollow square or retangle using for loop
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        
        for(int j=0; j<m; j++){
            if(i==0 || i==n-1){
            cout << "* ";
            }
            else{
                if(j==0 || j==m-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            }
        }
        cout << endl;
    }

    return 0;
}
