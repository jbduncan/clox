#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"

#define ALLOCATE(type, count) \
    (type*)reallocate(NULL, 0, sizeof(type) * (count))

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

/**
 * Manages the memory pointed to by `pointer`, following these rules:
 *
 * oldSize  | newSize              | Operation
 * =============================================================
 * 0        | Non-zero             | Allocate new block.
 * Non-zero | 0                    | Free allocation.
 * Non-zero | Smaller than oldSize | Shrink existing allocation.
 * Non-zero | Larger than oldSize  | Grow existing allocation.
 */
void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif //clox_memory_h
