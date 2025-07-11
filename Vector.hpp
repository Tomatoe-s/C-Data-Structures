#pragma once
#include <iostream>
#include <utility>
#include <stdexcept>




template <typename Type>
struct vector_{
   Type* data_;
   size_t capacity_ = 2;
   size_t current_size_ = 0;
   vector_(size_t capacity = 4) : capacity_(capacity){
    data_ = new Type[capacity];
    
   };
   ~vector_(){
    delete[] &data_;
   }
};
template <typename Type>
class Vector{
public:
Vector(size_t initial_size=4){
    resize(initial_size);
};
~Vector(){
    delete[] &vec;
}
void resize(size_t new_size){
    if (vec.capacity_>= new_size){
        throw std::logic_error("You can't resize the vector to less than the items in it!");
    }
    vec.capacity_ = new_size;
        Type* newdata_ = new Type[new_size];
        for (int index=0;index<=vec.current_size_;index++){
            newdata_[index] = vec.data_[index];

        };
        delete[] vec.data_;
        vec.data_ = newdata_;
}

size_t capacity(){
    return vec.capacity_;
}
size_t size(){
    return vec.current_size_;
}

void push_back(Type value){
    size_t oldCapacity = vec.data_[vec.current_size_] = value;
    vec.current_size_++;
    if (vec.current_size_ >= vec.capacity_) {
        size_t new_capacity = vec.capacity_*=2;
        resize(new_capacity);

    };
    
};

    Type& operator[](size_t index){
        return vec.data_[index%vec.capacity_];
    };
    
    void remove(size_t index){
        for (;index<vec.current_size_;index++){
            vec.data_[index] = std::move(vec.data_[index+1]);
        }
    };
    
    
private:
vector_<Type> vec;

};




