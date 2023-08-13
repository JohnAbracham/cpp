/*
Кириллица (1)
*/

#include <iostream>
#include <clocale>
using namespace std;
 
int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus"); // не функционирует с потоком ввода
    char string[20];
    cin >> string; // вводим строку, используя Кириллицу (СТРОКА СОХРАНИТСЯ В ПЕРЕМЕННОЙ НЕ КОРРЕКТНО)
    cout << "\nвывод: "<< string << endl; // ввывод строки
    system("pause");
    return 0;
}
