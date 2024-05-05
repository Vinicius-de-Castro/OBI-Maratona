#include <iostream>
 
using namespace std;
 
struct node{

    int val;
    node *child;
};

node *top;

void push(int x){
    node *n = new node;
    n -> val = x;
    n -> child = top;
    top = n;
}

void pop(){
    if (top == NULL) return;
    node *n = top -> child;
    delete top;
    top = n;
}

int top(){
    if (top == NULL) return -1;
    return top -> value;
}


int main() {
 
    
 
    return 0;
}