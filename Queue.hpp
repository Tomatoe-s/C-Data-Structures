#pragma once
#include "LinkedList.hpp"
template <typename Type>
class Queue{
    public:
    Queue():{
        head_ = new LinkedList<Type>(Type());
        last_ = head_;
    }
    void push(Type value){
        LinkedList<Type>* newLast_ = new LinkedList<Type>(value);
        last_->Previous = newLast_;
        newLast_->Next = last_;
        last_ = newLast_;
    }
    Type pop(){
        LinkedList<Type>* lastHead_ = head_;
        head_ = head_->Previous;
        delete lastHead_;
        
        
    }

    private:
        LinkedList<Type>* head_;
        LinkedList<Type>* last_;


}