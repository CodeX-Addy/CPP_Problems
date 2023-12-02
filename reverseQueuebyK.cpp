#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q, int k){
    stack<int> s;
    int n = q.size();
    for(int i=0; i<k; ++i){
        int t=q.front();
        q.pop();
        s.push(t);
    }

    while(!s.empty()){
        int e = s.top();
        s.pop();
        q.push(e);
    }

    for(int i=0; i<(n-k); i++){
        int t=q.front();
        q.pop();
        q.push(t);
    }
}
int main(){
    queue<int> q;
    int k;cin>>k;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseQueue(q, k);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}