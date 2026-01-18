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

//Full pyramid pattern
/*

     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int r=0; r<n; r++){
       
        for(int c=0; c<n-r-1; c++){
            cout << " ";
        }
        
        for(int c=0; c<r+1; c++){
            cout << "* ";
        }
        cout << endl;
        
    }

    return 0;
}

//Diamond pattern
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int n=num/2;
    
    for(int r=0; r<n; r++){
       
        for(int c=0; c<n-r-1; c++){
            cout << " ";
        }
        
        for(int c=0; c<r+1; c++){
            cout << "* ";
        }
        cout << endl;
        
    }

    return 0;
}

// Pattern
/*

1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        while(j < n){
            cout << j + 1 << " ";
            j = j + 1;
        }cout << endl;
        i = i + 1;
    }

    return 0;
}


// Pattern
/*

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << i + 1 << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*

1 
2 3 
4 5 6 
7 8 9 10 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    int cnt = 0;
    
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << cnt + 1 << " ";
            cnt += 1;
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

//Pattern
/*

1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 

*/

// Approch First
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        int val = i;
        while(j <= i){
            cout << val + 1 << " ";
            val += 1;
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Approach Second -> Without Additional Variable

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        
        while(j <= i){
            cout << i + j + 1 << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

*/

// Approach 1: With extra variable
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    while(i <= n){
        int j = 1;
        int val = i;
        while(j <= i){
            cout << val << " ";
            j += 1;
            val -= 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

//Approach 2: Without extra variable

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << i - j + 1 << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}


// Pattern

/*
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    char c = 'A';
    
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << char(c + i - 1) << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    char c = 'A';
    
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << char(c + j - 1) << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern

/*
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 1;
    
    char c = 'A';
    
    int cnt = 1;
    
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << char(c + cnt - 1) << " ";
            j += 1;
            cnt += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

//Pattern

/*

A B C 
B C D 
C D E 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    char c = 'A';
    
    while(i < n){
        int j = 0;
        while(j < n){
            cout << char(c + i + j) << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*

A 
B B 
C C C 
D D D D 
E E E E E 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    char c = 'A';
    
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << char(c + i) << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}


//Pattern
/*

A 
B C 
D E F 
G H I J 
K L M N O 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;    
    char c = 'A';   
    int cnt = 0;
    
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << char(c + cnt) << " ";
            j += 1;
            cnt += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

//Pattern
/*

A 
B C 
C D E 
D E F G 
E F G H I 

*/


#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    char c = 'A';
    
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << char(c + i + j) << " ";
            j += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*

E 
D E 
C D E 
B C D E 
A B C D E 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    char c = 'A';

    while(i < n){
        int j = 0;
        int cnt = 0;
        while(j <= i){
            cout << char(c + n - i - 1 + cnt) << " ";
            j += 1;
            cnt += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

// Pattern
/*

    *
   **
  ***
 ****
*****

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        int k = 0;
        while(j < n-i-1){
            cout << " ";
            j += 1;
        }
        while(k < i + 1){
            cout << "*";
            k += 1;
        }cout << endl;
        i += 1;
    }
    
    return 0;
}

//Pattern
/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        while(j < n-i){
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    
    return 0;
}

//Pattern
/*

*****
 ****
  ***
   **
    *
*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        int k = 0;
        
        while(j < i){
            cout << " "; 
            j = j + 1;
        }
        
        while(k < n - i){
            cout << "*";
            k = k + 1;
        }cout << endl;
        i = i + 1;
    }

    return 0;
}

//Pattern
/*

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int i = 0;
    
    while(i < n){
        int j = 0;
        int k = 0;
        
        while(j < i){
            cout << " "; 
            j = j + 1;
        }
        
        while(k < n - i){
            cout << "* ";
            k = k + 1;
        }cout << endl;
        i = i + 1;
    }

    return 0;
}
