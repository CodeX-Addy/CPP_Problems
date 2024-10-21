#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeatChar(string str){
    queue<char> q;
    int freq[26]={0};
    
    for(int i=0; i<str.length(); ++i){
        char ch = str[i];
        ++freq[ch-'a'];
        q.push(ch);
        
        
        while(!q.empty()){
            char firstChar = q.front();
            if(freq[firstChar-'a']>1) q.pop();
            else{
                cout << firstChar;
                break;
            }
        }
        if(q.empty()){
        cout << "#";
    }
    }
    
    
}
int main(){
    string str="ababc";
    firstNonRepeatChar(str);
    return 0;
}
