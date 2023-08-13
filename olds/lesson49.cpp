/*
кириллица, не работает библиотека виндовс (2)
*/

#include <iostream>
#include <windows.h>
using namespace std;
 
int main(int argc, char* argv[])
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
 
    char string[20];
    cin >> string; // вводим строку, используя Кириллицу
    cout << "\nвывод: "<< string << endl; // ввывод строки
    system("pause");
    return 0;
}
