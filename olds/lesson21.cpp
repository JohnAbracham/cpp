/*
Генератор случайных чисел rand()
*/


#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    cout << "1-random number = " << 1 + rand() % 100 << endl; // первый запуск генератора случайных чисел
    cout << "2-random number = " << 1 + rand() % 3 << endl; // второй запуск генератора случайных чисел
    cout << "3-random number = " << 1 + rand() % 3 << endl; // третий запуск генератора случайных чисел
    cout << "4-random number = " << 1 + rand() % 3 << endl; // четвёртый запуск генератора случайных чисел
    cout << "5-random number = " << 1 + rand() % 3 << endl; // пятый запуск генератора случайных чисел
    cout << "6-random number = " << 1 + rand() % 3 << endl; // шестой запуск генератора случайных чисел
    cout << "7-random number = " << 1 + rand() % 3 << endl; // седьмой запуск генератора случайных чисел
    cout << "8-random number = " << 1 + rand() % 3 << endl; // восьмой запуск генератора случайных чисел
    system("pause");
    return 0;
}
