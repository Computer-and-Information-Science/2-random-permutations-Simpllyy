// Anthony Delvalle

#include "permutations.h"
#include "randint.h"
#include <cstddef>

// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1(int array[], size_t size) {
    size_t filled = 0;
    while (filled < size) {
        int r = randint(0, size - 1);
        if (search(array, filled, r) == filled) {
            array[filled++] = r;
        }
    }
}


void permutations2(int array[], size_t size) {
    bool* used = new bool[size]();
    size_t filled = 0;
    while (filled < size) {
        int r = randint(0, size - 1);
        if (!used[r]) {
            used[r] = true;
            array[filled++] = r;
        }
    }
    delete[] used;
}

void permutations3(int array[], size_t size) {
    for (size_t i = 0; i < size; ++i)
        array[i] = static_cast<int>(i);

    for (size_t i = size - 1; i > 0; --i) {
        size_t j = randint(0, i);
        std::swap(array[i], array[j]);
    }
}
