#pragma once
#include "LinkedList.hpp"
#include <utility>
#include <stdexcept>
template <typename Type>
class Stack{
public:
    Stack(){
        head_ = new LinkedList<Type>(Type());
        top_ = head_;
    };
    void push(Type value){
        LinkedList<Type>* newData = new LinkedList<Type>(value);
        newData->Next = top_;
        top_ = newData;
    }
    void pop(){
        if (head_ == top_){
            throw std::logic_error("Theres no item to pop!");
        }
        LinkedList<Type>* to_pop = top_;
        top_ = top_->Next;
        delete to_pop;
    }
    Type top(){
        return top_->Value;
    }
    ~Stack(){
        delete head_;
        delete top_;
    }
private:
    LinkedList<Type>* head_;
    LinkedList<Type>* top_;
};