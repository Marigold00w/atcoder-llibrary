#include <string.h>

// Compare fixed-size character arrays in dictionary order
// For qsort() on char names[][11]
int compare_string(const void *a, const void *b)
{
    const char *x = (const char *)a;
    const char *y = (const char *)b;

    return strcmp(x, y);
}
