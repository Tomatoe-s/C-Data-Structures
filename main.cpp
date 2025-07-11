#include <iostream>
#include <utility>
using namespace std;





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
Vector(){

};
~Vector(){
    delete[] &vec;
}
void push_back(Type value){
    size_t oldCapacity = vec.data_[vec.current_size_] = value;
    vec.current_size_++;
    if (vec.current_size_ >= vec.capacity_) {
        size_t new_capacity = vec.capacity_*=2;
        vec.capacity_ = new_capacity;
        cout << "Resized array, new capacity: " <<new_capacity << endl;
        Type* newdata_ = new Type[new_capacity];
        for (int index=0;index<=vec.current_size_;index++){
            newdata_[index] = vec.data_[index];
            cout << index<<":  "<< newdata_[index]<< endl;

        };
        delete[] vec.data_;
        vec.data_ = newdata_;

    };
    
};

    Type& operator[](size_t index){
        return vec.data_[index];
    };
    
    void remove(size_t index){
        for (;index<vec.current_size_;index++){
            vec.data_[index] = move(vec.data_[index+1]);
        }
    };
    
    vector_<Type>* getvec(){
        return &vec;
}
private:
vector_<Type> vec;

};




int main(){
    Vector<int> vec;
    
    int max_elements = 33;
    for (int element=0;element<max_elements;element++){
            vector_<int>* ourVec = vec.getvec();
    int* array = ourVec->data_;

        vec.push_back(element);
        
        cout << vec[element] << endl;
    };
   

    return 0;
}