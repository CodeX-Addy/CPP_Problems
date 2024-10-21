
#include <iostream>
using namespace std;

int length(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin >> name;
    int len = length(name);
    cout << "The length of the given string is: " << len << endl;
}
