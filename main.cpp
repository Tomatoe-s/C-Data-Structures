
#include <iostream>
#include "Stack.hpp"
int main(){
    Stack<int> stack;
    stack.push(13);
    stack.push(12);
    std::cout << stack.top() << std::endl;
    stack.push(16);
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
}