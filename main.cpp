#include <iostream>
#include "Algorithms/SelectionSort.hpp"
int main() {
    int arr[] = {5, 2, 8, 1, 3};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, arr + n);

    for (size_t i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    // Output: 1 2 3 5 8
}
