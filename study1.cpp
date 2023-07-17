/******************************************************************************
Работа с переменными разных типов:
    size_t - представление типа данных в битах, сколько памяти он занимает
    
*******************************************************************************/

#include <iostream>
#include <climits> // Константы INT_MIN,INT_MAX,LONG_MIN,LOMG_MAX...
#include <clocale> // бибилиотека для работы с форматом и формой вывода
#include <limits> // бибилиотека для работы с пределами?

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    // size_t a1 = sizeof(int);
    cout << "Размер типа переменной int : " << sizeof(int) << " , и максимальное число " << numeric_limits<int>::max() << endl;
    cout << "Размер типа переменной short : " << sizeof(short) << " , и максимальное число " << numeric_limits<short>::max() << endl;
    cout << "Размер типа переменной long : " << sizeof(long) << " , и максимальное число " << numeric_limits<long>::max() << endl;
    cout << "Размер типа переменной long long : " << sizeof(long long) << " , и максимальное число " << numeric_limits<long long>::max() << endl;
    cout << "Размер типа переменной unsigned int : " << sizeof(unsigned int) << " , и максимальное число " << numeric_limits<unsigned int>::max() << endl;
    cout << "Размер типа переменной unsigned short : " << sizeof(unsigned short) << " , и максимальное число " << numeric_limits<unsigned short>::max() << endl;
    cout << "Размер типа переменной unsigned long : " << sizeof(unsigned long) << " , и максимальное число " << numeric_limits<unsigned long>::max() << endl;
    cout << "Размер типа переменной unsigned long long : " << sizeof(unsigned long long) << " , и максимальное число " << numeric_limits<unsigned long long>::max() << endl;
    cout << "Размер типа переменной float : " << sizeof(float) << " , и максимальное число " << numeric_limits<float>::max() << endl;
    cout << "Размер типа переменной double : " << sizeof(double) << " , и максимальное число " << numeric_limits<double>::max() << endl;
    cout << "Размер типа переменной long double : " << sizeof(long double) << " , и максимальное число " << numeric_limits<long double>::max() << endl;
    cout << "Размер типа переменной bool : " << sizeof(bool) << " , и максимальное число " << numeric_limits<bool>::max() << endl;
    cout << "Размер типа переменной char : " << sizeof(char) << endl;
    cout << "Размер типа переменной wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Размер типа переменной char16_t : " << sizeof(char16_t) << endl;
    cout << "Размер типа переменной char32_t : " << sizeof(char32_t) << endl;
    cout << "Размер типа переменной string : " << sizeof(string) << endl;
    return 0;
}
