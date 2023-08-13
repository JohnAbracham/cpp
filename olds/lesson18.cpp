//Форматированный ввод/вывод (1)
/*
cout.fill('symbol')
cout.width(WIDTH_FIELD)
cout.precision(NUMBER)
cout.self(ios::NAME_FLAG)/cout.unself(ios::NAME_FLAG)
cout.self(ios::FLAG1 | ios::FLAG2 | ...)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]){
cout.setf(ios::boolalpha);//Вывод логических велечин в текстовом виде -фалс и труе
bool log_false = 0,log_true = 1;
cout << log_false << endl<< log_true << endl;

/*cout.unsetf(ios::dec);//Вывод в восмеричной системе
cout.setf(ios::oct);
int value;
cin >> value;
cout << value << endl;

cout.setf(ios::dec);//Вывод в десятеричной системе
int value = 148;
cout << value << endl;

cout.unsetf(ios::dec);//Вывод в шеснадцеричной системе
cout.setf(ios::hex);
int value;
cin >> value;
cout << value << endl;

cout.unsetf(ios::dec);//Выводить индикатор основания системы счисления
cout.setf(ios::oct | ios::showbase);
int value;
cin >> value;
cout << value << endl;

cout.unsetf(ios::dec);//В шестнадцатеричной системе счисления использовать буквы верхнего регистра
cout.setf(ios::hex | ios::uppercase);
int value;
cin >> value;
cout << value << endl;

cout.setf(ios::showpos);//Вывод знака плюс + для положительных чисел
int value = 15;
cout << value << endl;

cout.setf(ios::scientific);//Вывод чисел с плавающей точкой в экспоненциальной форме
double value = 1024.165;
cout << value << endl;

double value = 1024.165;//Вывод чисел с плавающей точкой в фиксированной форме
cout << value << endl;

cout.width(40);//Выравнивание по правой границе(по умолчанию). Сначала необходимо установить ширину поля(ширина поля должна быть заведомо большей чем, длина выводимой строки).
cout << "cppstudio.com" << endl;
*/
cout.setf(ios::left);//Выравнивание по левой границе. Сначала необходимо установить ширину поля(ширина поля должна быть заведомо большей чем, длина выводимой строки).
cout.width(40);
cout << "cppstudio.com" << endl;
}
