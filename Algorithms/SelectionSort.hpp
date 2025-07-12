#include <iostream>
#include <utility>
template<typename Type>
void SelectionSort(Type* array,Type* last){
    size_t array_size = last-array;
    size_t start_index = 0;
    do {
        Type minimum_index = start_index;
        for (size_t index = start_index;index<array_size;index++){
            if (array[index] < array[minimum_index]){
                minimum_index = index;
            };
        };
        std::swap(array[minimum_index],array[start_index]);

        start_index++;
    } while (array_size >= start_index);
}