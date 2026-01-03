#include<iostream>
#include<cctype>
using namespace std;

int main(){
    
    char ch;
    cin >> ch;
    
    if(isupper(ch))
        cout << "uppercase" << endl;
    else if(islower(ch))
        cout << "lowercase" << endl;
    else if(isdigit(ch))
        cout << "numeric" << endl;

}
