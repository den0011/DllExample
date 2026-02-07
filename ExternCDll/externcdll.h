#ifndef EXTERNCDLL_H
#define EXTERNCDLL_H

#ifdef EXTERNCDLL_LIBRARY
#  define EXTERNCDLL_EXPORT __declspec(dllexport)
#else
#  define EXTERNCDLL_EXPORT __declspec(dllimport)
#endif

// Экспорт функций в стиле C (без name mangling)
#ifdef __cplusplus
extern "C" {
#endif

EXTERNCDLL_EXPORT int sumArray(int* array, int size);
EXTERNCDLL_EXPORT double calculateAverage(double* values, int count);
EXTERNCDLL_EXPORT const char* getLibraryInfo();

#ifdef __cplusplus
}
#endif

#endif // EXTERNCDLL_H
