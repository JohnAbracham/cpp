/*
Оператор выбора if else
*/
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int a, b;
    cout << "Vvedite pervoe chislo: ";
    cin >> a;
    cout << "Vvedite vtoroe chislo: ";
    cin >> b;
    if ( a >= b) // если a больше либо равно b, то
    {
     cout << a << " >= " << b << endl;
    } else  // иначе
         {
          cout << a << " <= " << b << endl;
         }
    system("pause");
}    
