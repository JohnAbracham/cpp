/*
Указатели (2)
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int var1 = 123; // инициализация переменной var1 числом 123
    int var2 = 99; // инициализация переменной var2 числом 99
    int *ptrvar1 = &var1; // указатель на переменную var1
    int *ptrvar2 = &var2; // указатель на переменную var2
    cout << "var1    = " << var1 << endl;
    cout << "var2    = " << var2 << endl;
    cout << "ptrvar1 = " << ptrvar1 << endl;
    cout << "ptrvar2 = " << ptrvar2 << endl;
    if (ptrvar1 > ptrvar2) // сравниваем значения указателей, то есть адреса переменных
        cout << "ptrvar1 > ptrvar2" << endl;
    if (*ptrvar1 > *ptrvar2) // сравниваем значения переменных, на которые ссылаются указатели
        cout << "*ptrvar1 > *ptrvar2" << endl;
    system("pause");
    return 0;
}
