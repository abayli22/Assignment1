#include <iostream>
#include "Searching.h"

int main() {
    std::array<int, 7> arr = { 1, 2, 2, 2, 3, 4, 5 };
    std::vector<int> vec = { 1, 1, 1, 2, 3, 3, 4 };

    std::cout << "Array test: " << binarySearchFirst(arr, 2) << std::endl; 
    std::cout << "Vector test: " << binarySearchFirst(vec, 3) << std::endl; 
    std::cout << "Yok: " << binarySearchFirst(vec, 10) << std::endl; 

    return 0;
}
