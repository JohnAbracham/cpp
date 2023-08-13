/*
Операции инкремента и декремента
++/*имя переменной*/  // префиксный инкремент (преинкремент)
/*имя переменной*++ // постфиксный инкремент (постинкремент)
--/*имя переменной*;  // префиксный декремент (предекремент)
/*имя переменной*--; // постфиксный декремент (постдекремент)
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int value = 2011;
    cout << "value   = " << value   << endl; // начальное значение
    cout << "++value = " << ++value << endl; // операция преинкремента
    cout << "value++ = " << value++ << endl; // операция постинкремента
    cout << "value   = " << value   << endl; // конечное значение в переменной value после выполнения операции постинкремента
    cout << "--value = " << --value << endl; // операция предекремента
    cout << "value-- = " << value-- << endl; // операция постдекремента
    cout << "value   = " << value   << endl; // конечное значение в переменной value после выполнения операции постдекремента
    system("pause");
    return 0;
}
