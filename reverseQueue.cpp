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
    
}
