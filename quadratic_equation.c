//
// Created by raulett on 11.07.2023.
//

#include <stdbool.h>
#include <math.h>
#include <malloc.h>
#include "quadratic_equation.h"

double * quadratic_equation_solver(double a, double b, double c){
    double D = b*b -4 * a * c;
    double * result = malloc(sizeof(double) * 5);
    if (D>0) {
        result[0] = (-1*b + sqrt(D))/(2*a);
        result[1] = 0;
        result[2] = (-1*b - sqrt(D))/(2*a);
        result[3] = 0;
        result[4] = 2;
        return result;
    } else if (D==0){
        result[0] = (-1*b)/(2*a);
        result[1] = 0;
        result[2] = (-1*b)/(2*a);
        result[3] = 0;
        result[4] = 1;
        return result;
    } else {
        result[0] = (-1*b)/(2*a);
        result[1] = sqrt(-1*D) / (2*a);
        result[2] = (-1*b)/(2*a);
        result[3] = sqrt(-1*D) / (2*a);
        result[4] = 2;
        return result;
    }
}