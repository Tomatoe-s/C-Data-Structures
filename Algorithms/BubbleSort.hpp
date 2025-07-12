#include <utility>
template <typename Type>
void BubbleSort(Type* array,Type* last){
    
    size_t array_size = last - array;
    size_t sorted = array_size;
    if (array == last) return;
    bool swapped;
    do {
        swapped = false;
        for (size_t index = 0; index < array_size-1;index++){
            size_t left_index = index;
            size_t right_index = index +1;

            Type left = array[left_index];
            Type right = array[right_index];
            if (right < left){
                swapped = true;
                std::swap(array[left_index],array[right_index]);
            };
            sorted--;
        }; 
    } while (swapped);
};