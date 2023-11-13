#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    
    int temp = s.top();
    s.pop();
    
    insertAtBottom(s, ele);
    
    //backtrack
    s.push(temp);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    
    int t = st.top();
    st.pop();
    
    reverse(st);
    insertAtBottom(st, t);
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    // insertAtBottom(st, 400);
    
    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    
    reverse(st);
    
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    
    return 0;
}
