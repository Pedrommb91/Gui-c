#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdlib.h>

void AppendInt(int **arr, int *size, int value) {
    // Check if the array is NULL
    if (*arr == NULL) {
        *size = 1;
        *arr = (int*)malloc(*size * sizeof(int));
    }
    else {
        // Increase the size of the array by 1
        *size += 1;
        *arr = (int*)realloc(*arr, *size * sizeof(**arr));
    }

    // Check if memory allocation was successful
    if (*arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Append the new value to the array
    (*arr)[*size - 1] = value;
    

	/*list = (int*)realloc(list, size+1);
	list[size - 1] = value;
	return size++;*/
}
#endif
