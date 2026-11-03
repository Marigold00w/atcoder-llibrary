#include <string.h>

// Return the first index with a string >= x
// The array must be sorted in dictionary order
// Each string occupies 11 bytes
int lower_bound_string(char a[][11], int n, const char *x)
{
    int left = 0;
    int right = n;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (strcmp(a[mid], x) < 0)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}
