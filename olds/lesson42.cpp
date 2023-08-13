/*
Ссылки
*/

#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    int value = 15;
    int &reference = value; // объявление и инициализация ссылки значением переменной value
    cout << "value     = " << value     << endl;
    cout << "reference = " << reference << endl;
    reference+=15; // изменяем значение переменной value посредством изменения значения в ссылке
    cout << "value     = " << value     << endl; // смотрим, что получилось, как будет видно дальше значение поменялось как в ссылке,
    cout << "reference = " << reference << endl; //  так и в ссылочной переменной
    system("pause");
    return 0;
}
