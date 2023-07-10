#include <iostream>
#include <stack>
using namespace std;


void insertAtBottom(stack<int>& stk, int value) {
    if (stk.empty()) {
        stk.push(value);
        return;
    }

    int topElement = stk.top();
    stk.pop();
    insertAtBottom(stk, value);
    stk.push(topElement);
}

void printStack(const stack<int>& stk) {
    stack<int> tempStack = stk;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    int value = 5;

    cout << "Original stack: ";
    printStack(myStack);

    insertAtBottom(myStack, value);

    cout << "Stack after inserting " << value << ": ";
    printStack(myStack);

    return 0;
}
