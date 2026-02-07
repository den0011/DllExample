#ifndef SIMPLEDLL_H
#define SIMPLEDLL_H

#include <QString>

// Макросы для экспорта/импорта
#ifdef SIMPLEDLL_LIBRARY
#  define SIMPLEDLL_EXPORT __declspec(dllexport)
#else
#  define SIMPLEDLL_EXPORT __declspec(dllimport)
#endif

// Класс с экспортируемыми методами
class SIMPLEDLL_EXPORT Calculator
{
public:
    Calculator();
    
    int add(int a, int b);
    int multiply(int a, int b);
    QString getVersion();
};

#endif // SIMPLEDLL_H
