#ifndef SEARCHING_H
#define SEARCHING_H

#include <array>
#include <vector>

template <typename T, size_t N>
int binarySearchFirst(const std::array<T, N>& arr, T target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;      
            right = mid - 1;   
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

template <typename T>
int binarySearchFirst(const std::vector<T>& vec, T target) {
    int left = 0;
    int right = vec.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == target) {
            result = mid;     
            right = mid - 1;   
        }
        else if (vec[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

#endif

