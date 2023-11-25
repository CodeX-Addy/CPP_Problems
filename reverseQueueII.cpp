//Reverse k elements
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseK(queue<int> &q, int k){
    stack<int> s;
    int n = q.size();
    for(int i=0; i<k; ++i){
        int f = q.front();
        q.pop();
        s.push(f);
    }
    
    while(!s.empty()){
        int t = s.top();
        s.pop();
        q.push(t);
    }
    
    for(int i=0; i<n-k; ++i){
        int f = q.front();
        q.pop();
        q.push(f);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    reverseK(q, 3);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout << f << " ";
    }
}
