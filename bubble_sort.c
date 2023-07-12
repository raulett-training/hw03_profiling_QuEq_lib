//
// Created by raulett on 11.07.2023.
//

#include "bubble_sort.h"

int* bubble_sort(int* arr, size_t arr_size){
    size_t start_j = 0;
    for (size_t i = 0; i < arr_size; i++){
        for (size_t j = start_j; j < arr_size-1; j++){
            if (arr[j] > arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j+1]^arr[j];
            }
        }
        start_j++;
    }
    return arr;
}