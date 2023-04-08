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
