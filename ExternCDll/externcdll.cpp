#include "externcdll.h"

extern "C" {

EXTERNCDLL_EXPORT int sumArray(int* array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

EXTERNCDLL_EXPORT double calculateAverage(double* values, int count)
{
    if (count == 0) return 0.0;
    
    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        sum += values[i];
    }
    return sum / count;
}

EXTERNCDLL_EXPORT const char* getLibraryInfo()
{
    return "ExternC DLL v1.0 - C-style interface";
}

} // extern "C"
