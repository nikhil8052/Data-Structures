#include <iostream>
#include <vector>

using namespace std;

class Stack {
   public:
    int size = 0;
    vector<int> stack;


    bool pop() {
        if (stack.size() != 0) {
            stack.pop_back();
        } 
    }

    int top() {
        if (stack.size() != 0) {
            int ele;
            for ( int i=0 ; i< stack.size(); i++){
                ele=stack[i];
            }
            return ele;
        } else {
            return -1;
        }
    }

    bool push(int ele) {
        stack.push_back(ele);
    }

    void print() {
        for (int i = 0; i < stack.size(); i++) {
            cout << stack[i] << "  ";
        }
    }
};


int main() {
    Stack a = Stack();
    a.push(1);
    a.push(2);
    a.pop();
    a.push(3);
    a.push(4);
    a.top();
    a.print();

    cout << " Done ";
}