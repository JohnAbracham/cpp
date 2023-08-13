/*
Оператор выбора if
*/

#include <iostream>
using namespace std;
 
int main()
{
 int a, b; // объявление переменных типа int, то есть в таких переменных хранятся только целые числа
 cout << "Vvedite pervoe chislo: ";
 cin >> a;
 cout << "Vvedite vtoroe chislo: ";
 cin >> b;
   if (a > b)                    // если а > b
   {
      cout << a << " > " << b << endl; // печатать данное сообщение
   }
   if (a < b)// если а < b
   {
      cout << a << " < " << b << endl;
   }
   if (a == b) // если а = b
     cout << a << " = " << b << endl; // в теле условного оператора опущены фигурные скобочки
 system("pause");
 return 0;
}
