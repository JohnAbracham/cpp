/*
Оператор break
*/

#include <iostream>
// заголовочный файл <cmath> содержит прототип функции pow()
#include <cmath>
using namespace std;
 
int main(int argc, char* argv[])
{
    for (int count = 0; count <= 10; count++) // начало цикла for
    {
        if ( count == 6)
            break; // выход из цикла for
        cout << "2^" << count << " = " << pow(2.0,count) << endl; // печать степени двойки
    }
    system("pause");
    return 0;
}
