#include "merge_sort.h"
#include "bubble_sort.h"
#include <stdio.h>
#include "sort_profiler.h"
#include <math.h>
#include "quadratic_equation.h"

#define ARR_SIZE 100



int main() {
    printf("-------task 1 sort function profiling test begin-------\n");
    srand(2342);
//    printf("initial array: \n");
    int* arr = malloc(sizeof(int) * ARR_SIZE);
    for (unsigned int i=0; i<ARR_SIZE; i++){
        arr[i] = rand()%100;
//        printf("%d,", arr[i]);
    }
    printf("\n");
    int* merge_sort_arr = malloc(sizeof(int) * ARR_SIZE);
    for (unsigned int i=0; i<ARR_SIZE; i++){
        merge_sort_arr[i] = arr[i];
    }
    printf("merge sort test: \n");
    sort_profiler(merge_sort_arr, ARR_SIZE, merge_sort);
//    merge_sort(merge_sort_arr, ARR_SIZE);
//    for (unsigned int i=0; i<ARR_SIZE; i++){
//        printf("%d,", merge_sort_arr[i]);
//    }
    printf("\n");
    int* bubble_sort_arr = malloc(sizeof(int) * ARR_SIZE);
    for (unsigned int i=0; i<ARR_SIZE; i++){
        bubble_sort_arr[i] = arr[i];
    }
    printf("bubble sort test: \n");
    sort_profiler(bubble_sort_arr, ARR_SIZE, bubble_sort);
//    bubble_sort(bubble_sort_arr, ARR_SIZE);
//    for (unsigned int i=0; i<ARR_SIZE; i++){
//        printf("%d,", bubble_sort_arr[i]);
//    }
    printf("\n");
    free(arr);
    free(merge_sort_arr);
    free(bubble_sort_arr);
    printf("-------task 1 sort function profiling test end-------\n");
    printf("\n");
    printf("-------task 2 quadratic equation test begin-------\n");
    printf("Enter quadratic equation coefficients:\n");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf(" entered numbers a = %.2lf, b = %.2lf, c = %.24lf\n", a, b, c);
    double * qe_result = quadratic_equation_solver(a, b, c);
    if ((pow(qe_result[4], 2) - 1.0) < 0.01) {
        printf("quadratic equation has only root: \n");
        printf("x1 = %lf", qe_result[0]);
    } else {
        printf("quadratic equation roots: \n");
        printf("x1 = %.2lf + (%.2lfi) \n", qe_result[0], qe_result[1]);
        printf("x2 = %.2lf - (%.2lfi) \n", qe_result[2], qe_result[3]);
    }
    printf("-------task 2 quadratic equation test end-------\n");
    printf("\n");
    return 0;
}
