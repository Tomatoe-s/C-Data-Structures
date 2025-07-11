#pragma once
#include "Vector.hpp"
#include <utility>
template <typename Key,typename Value>
class HashMap{
    public:
    HashMap(size_t initial_size=1024)  : items(initial_size){}
    
    Value& operator[](Key key){
        size_t hashedKey = std::hash<Key>()(key);
        return items[hashedKey % items.capacity()];
    }
    
    private:
         Vector<Value> items;
};