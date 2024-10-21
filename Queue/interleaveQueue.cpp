#include<iostream>
#include<queue>
using namespace std;


void interleaveQueue(queue<int> &first){
    int n = first.size();
    queue<int> second;
    for(int i=0; i<n/2; ++i){
        int t=first.front();
        first.pop();

        second.push(t);
    }

    for(int i=0; i<n/2; ++i){
        int t=second.front();
        second.pop();

        first.push(t);

        t = first.front();
        first.pop();

        first.push(t);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    
    interleaveQueue(q);
    //printing queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
