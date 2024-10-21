#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    char op;
    cout << "Enter your operation" <<endl;
    cin >> op;
    
    switch(op){
        case '+': cout << a+b << endl;
        break;
        case '-': cout << a-b << endl;
        break;
        case '*': cout << a*b << endl;
        break;
        case '/': cout << a/b << endl;
        break;
        case '%': cout << a%b << endl;
        break;
        
        default: cout << "Please enter a valid operator" << endl;
    }

    return 0;
}
