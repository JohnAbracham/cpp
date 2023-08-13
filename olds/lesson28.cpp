/*
Оператор continue
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int in_number; // переменная для хранения введённого числа
    do
    {
        cout << "Enter number: ";
        cin >> in_number; // считываем введённое число в переменную in_number
        if ( in_number > 10 || in_number < 0 ) // если введённое число не входит в заданный интервал
            continue; // переход на следующую итерацию цикла do while
        cout << "square = " << in_number * in_number << endl; // возводим в квадрат введённое число
    } while ( in_number >= 0 ); // пока введённое число больше либо равно нулю цикл будет работать
    system("pause");
    return 0;
}
