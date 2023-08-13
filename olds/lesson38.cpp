/*
Указатели на функции

тип (*имя)(значение1, значение2, ...)
*/

#include <iostream>

using namespace std;

int nod(int, int ); // прототип указываемой функции

int main(int argc, char* argv[])
{
    int (*ptrnod)(int, int); // объявление указателя на функцию
    ptrnod=nod; // присваиваем адрес функции указателю ptrnod
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "NOD = " << ptrnod(a, b) << endl; // обращаемся к функции через указатель
    system("pause");
    return 0;
}
int nod(int number1, int number2) // рекурсивная функция нахождения наибольшего общего делителя НОД
{
    if ( number2 == 0 ) //базовое решение
        return number1;
    return nod(number2, number1 % number2); // рекурсивное решение НОД
}

