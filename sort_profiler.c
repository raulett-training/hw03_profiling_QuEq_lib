//
// Created by raulett on 11.07.2023.
//

#include "sort_profiler.h"
#include "time.h"
#include <stdio.h>

void sort_profiler(int* array, size_t arr_size, int* (*sort_function)(int*, size_t)){
    printf("sorting array size %zu\n", arr_size);
    clock_t t1, t2;
    t1 =  clock();
//    printf("t1 time: %ld\n", t1);
    sort_function(array, arr_size);
    t2 =  clock();
//    printf("t2 time: %ld\n", t2);
    printf("profiling result %lf ms\n", (double)(t2-t1) / (((double)CLOCKS_PER_SEC / 1000.0)));
}
