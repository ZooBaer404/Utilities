#ifndef ARRAY_H_
#define ARRAY_H_

#include <stdio.h>
#include <stdlib.h>

enum ARRAY_RETURNS {OUT_OF_BOUND, ARRAY_NULL, ZERO_SIZE, NORMAL};
typedef unsigned long index;

int* arrayi_new(int size);
void arrayi_print(int array[], unsigned int size);
ARRAY_RETURNS arrayi_add(int array[], int value);

double* arrayd_new(int size);
void arrayd_print(double array[], unsigned int size);
ARRAY_RETURNS arrayd_add(double array[], double value);

ARRAY_RETURNS arrayi_insert(int* array, unsigned int array_size, int value);
ARRAY_RETURNS arrayi_del_index(int* array, index i);
index arrayi_search(int* array, unsigned int size, int value);
int arrayi_index_value(int* array, unsigned int array_size, index i) {
    if (array == NULL) {
        perror("arrayi_index_value: array NULL\n");
        return ARRAY_NULL;
    }

    if (array_size == 0) {
        fprintf("arrayi_index_value: array size is 0");
        return -1;
    }

    if (i >= size) {
        fprintf("out of bound\n");
        return -1;
    }

    return array[i];
}


#endif
