#include <stdlib.h>
#include "memory.h"

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void* result = realloc(pointer, newSize);
  if (result == NULL) {
    // realloc failed to find any spare blocks of memory with the
    // requested size, so there's nothing the VM can do other
    // than exit as gracefully as possible.
    exit(1);
  }
  return result;
}
