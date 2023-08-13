/*
Арифметические операции
*/
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    double sum, razn, pow, div; // объявление переменных через запятую
    double a1; // отдельное объявление переменной a1
    double a2; // отдельное объявление переменной a2
    cout << "Vvedite pervoe chislo: ";
    cin >> a1;
    cout << "Vvedite vtoroe chislo: ";
    cin >> a2;
    sum  = a1 + a2;  // операция сложения
    razn = a1 - a2;  // операция вычитания
    pow  = a1 * a2;  // операция умножения
    div  = a1 / a2;  // операция деления
    cout << a1 << "+" << a2 << "=" << sum  << endl;
    cout << a1 << "-" << a2 << "=" << razn << endl;
    cout << a1 << "*" << a2 << "=" << pow  << endl;
    cout << a1 << "/" << a2 << "=" << div  << endl;
    cout << "8  % 4  = " << 8 % 4   << endl; // выполнение операции "остаток от деления"
    cout << "7  % 4  = " << 7 % 4   << endl;
    cout << "2  % 4  = " << 2 % 4   << endl;
    cout << "43 % 10 = " << 43 % 10 << endl;
    system ("pause");
    return 0;
}
