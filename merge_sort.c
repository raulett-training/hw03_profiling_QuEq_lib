//
// Created by raulett on 11.07.2023.
//

#include "merge_sort.h"

int* merge_sort(int* arr, size_t arr_size){
    if (arr_size == 1){
        return arr;
    } else {
        size_t lhs_size = arr_size/2 + arr_size%2;
        size_t rhs_size = arr_size - lhs_size;
        int* lhs_arr = merge_sort(&arr[0], lhs_size);
        int* rhs_arr = merge_sort(&arr[lhs_size], rhs_size);
        int temp_arr[arr_size];
        size_t i=0, j = 0;
        while ((i < lhs_size) && (j < rhs_size)){
            if (lhs_arr[i] < rhs_arr[j]){
                temp_arr[i+j] = lhs_arr[i];
                i++;
            } else{
                temp_arr[i+j] = rhs_arr[j];
                j++;
            }
        }
        if (i < lhs_size){
            for (i; i < lhs_size; i++){
                temp_arr[i+j] = lhs_arr[i];
            }
        } else {
            for (j; j < rhs_size; j++){
                temp_arr[i+j] = rhs_arr[j];
            }
        }
        for(size_t i = 0; i < arr_size; i++){
            arr[i] = temp_arr[i];
        }
        return arr;
    }
}