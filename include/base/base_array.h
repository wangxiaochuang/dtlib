#ifndef _BASE_ARRAY_H
#define _BASE_ARRAY_H

#define int array_compare(void *a, void *b);

typedef struct {
} ARRAY, *ARRAY_P;

ARRAY_P array_create(size_t count, size_t size, array_compare compare);

void array_destroy(ARRAY_P arr);

int array_insert(ARRAY_P arr, void *data);

int array_delete(ARRAY_P arr, void *data);

int array_isExist(ARRAY_P arr, void *data);

#endif /*_BASE_ARRAY_H*/
