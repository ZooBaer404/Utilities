#include "array.h"


int* arrayi_new(int size) {
    int *array = malloc(sizeof(int) * size);
    if (array == NULL) {
        perror("arrayi: array NULL after allocation\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    for (i; i < size; i++) {
        array[i] = 0;
    }

    return array;
}


double* arrayd_new(int size) {
    double *array = malloc(sizeof(double) * size);
    if (array == NULL) {
        perror("arrayd: array NULL after allocation\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    for (i; i < size; i++) {
        array[i] = 0;
    }

    return array;
}


void arrayi_print(int array[], unsigned int size) {
    if (array == NULL) {
        perror("arrayi_print: array is NULL\n");
        exit(EXIT_FAILURE);
    }

    if (size == 0) {
        fprintf(stderr, "arrayi_print: size if 0\n");
        return;
    }

    putchar('[');
    printf("%d", array[0]);
    int i = 1;
    for (i; i < size; i++) {
        printf(", %d", array[i]);
    }
    printf("]\n");
}

void arrayd_print(double array[], unsigned int size) {
    if (array == NULL) {
        perror("array_d_print: array is NULL\n");
        exit(EXIT_FAILURE);
    }

    if (size == 0) {
        fprintf(stderr, "arrayd_print: size is 0\n");
        return;
    }

    putchar('[');
    printf("%f", array[0]);
    int i = 1;
    for (i; i < size; i++) {
        printf(", %f", array[i]);
    }
    printf("]\n");
}

static int current = 0;

ARRAY_RETURNS arrayi_insert(int* array, unsigned int array_size, int value) {
    if (array == NULL) {
        perror("arrayi_insert: array is NULL\n");
        return -1;
    }

    if (array_size == 0) {
        fprintf(stderr, "arrayi_insert: array size is 0\n");
        return -1;
    }

    array[current++] = value;

    return 1;
}

ARRAY_RETURNS arrayi_del_index(int* array, unsigned int array_size, unsigned int index) {
    if (array == NULL) {
        perror("arrayi_del_index: array is NULL\n");
        return -1;
    }

    if (array_size == 0) {
        fprintf(stderr, "arrayi_del_index: array size if zero\n");
        return -1;
    }

    unsigned int i = index;
    while (i < array_size - 1) {
        array[i] = array[i+1];
        i++;
    }


    current--;


}

index arrayi_search(int* array, unsigned int array_size, int value) {
    if (array == NULL) {
        perror("arrayi_search: array is NULL\n");
        exit(EXIT_FAILURE);
    }

    if (array_size == 0) {
        fprintf(stderr, "arrayi_search: array size is zero");
        return -1;
    }

    unsigned int i = 0;
    for (i; i < array_size; i++) {
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}
