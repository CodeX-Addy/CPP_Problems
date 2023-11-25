#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){
    
    stack<int> s;
    //Queue to stack
    while(!q.empty()){
        int e = q.front();
        q.pop();
        s.push(e);
    }
    
    //stack to queue
    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    
     while(!q.empty()){
         int ele = q.front();
        q.pop();
        
        cout << ele << " ";
    }
    printf("\n");
    reverseQueue(q);
    
    while(!q.empty()){
         int ele = q.front();
        q.pop();
        
        cout << ele << " ";
    }

    //Reversing queue using recursion

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){
    //base case
    if(q.empty()) return;
    
    int f = q.front();
    q.pop();
    
    reverseQueue(q);
    q.push(f);
}
int main() {
    
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.push(100);
    
    reverseQueue(q);
     while(!q.empty()){
        int t = q.front();
        q.pop();
        cout << t << " ";
    }
    cout << endl;
    return 0;
}
    
}
