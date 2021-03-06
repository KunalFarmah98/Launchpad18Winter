// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <stack>
using namespace std;
// typedef stack<int> stk;

void reverseStk(stack<int>& s1, stack<int>& s2){
    int cnt = 0;
    int n = s1.size();
    for (int i = 1; i <= n - 1; ++i)
    {
        int x = s1.top();
        s1.pop();
        for (int i = 1; i <= n - cnt - 1; ++i)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        ++cnt;
        while(!s2.empty()){
            int y = s2.top();
            s2.pop();
            s1.push(y);
        }
    }
}


// using recursion 
void insertAtBottom(stack<int>& s, int x){
    if (s.empty()){
        s.push(x);
        return;
    }

    int y = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(y);
}

void reverseStkRec(stack<int>& s){
    if (s.empty()) return;

    int x = s.top();
    s.pop();
    reverseStkRec(s);
    insertAtBottom(s, x);
}


void printStk(stack<int>& s){
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

int main(){
    stack<int> s1;
    int x;
    
    while(true){
        cin >> x;
        if (x == -1) break;
        s1.push(x);
    }
    // stack<int> s2;
    
    // reverseStk(s1, s2);
    // reverseStkRec(s1);


    printStk(s1);    
}