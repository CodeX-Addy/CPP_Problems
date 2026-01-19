#include <iostream>
using namespace std;

// It'll not going to reach the statement "It is done!"
int main() {
    
    for(int i=0; i<5; ++i){
        cout << i << " ";
        continue;
        cout << "It is done!" << endl;
    }

    return 0;
}
