#include <utility>
#include <bitset>
#include <iostream>
#include "LinkedList.hpp"
int main(){
    LinkedList<int>* last = new LinkedList<int>(0);
    LinkedList<int>* head = last;
    for (int i=1;i<23;i++){
        LinkedList<int>* newL = new LinkedList<int>(i);
        last->Next = newL;
        last = newL;
    }
    LinkedList<int>* current = head;
    
    while(current->Next != nullptr){
        std::cout << current->Value << std::endl;
        current = current->Next;
    }
}