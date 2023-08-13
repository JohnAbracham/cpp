/*
Рандомайзер
stand() - позволяет каждый раз генерировать случанйые числа, иначе он как сгенерирует так и оставит значения
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    unsigned rand_value = 11;
    srand(rand_value); // рандомизация генератора случайных чисел и их сохранение
    cout << "rand_value = " << rand_value << endl;
    cout << "1-random number = " << 1 + rand() % 10 << endl; // первый запуск генератора случайных чисел
    cout << "2-random number = " << 1 + rand() % 10 << endl; // второй запуск генератора случайных чисел
    system("pause");
    return 0;
}
