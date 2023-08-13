/*
Явное и неявное преобразование типов данных
Явное преобразование float(15) / 2
Унарная операция приведения типа static_cast<float>(15)
fixed и setprecision() - покзывает количество знаков после запятой

*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main(int argc, char* argv[])
{
    int int_value15 = 15, int_value2 = 2; // объявляем две переменные типа int
    float float_value15 = 15, float_value2 = 2; // объявляем две переменные типа float
    cout << fixed << setprecision(2) // определяем, при выводе чисел с плавающей точкой, два знака после запятой
         << "15   / 2   = " << int_value15   / int_value2   << endl  //неявное преобразование типов данных
         << "15   / 2   = " << int_value15   / float_value2 << endl  //неявное преобразование типов данных
         << "15   / 2   = " << float_value15 / int_value2   << endl  //неявное преобразование типов данных
         << "15   / 2   = " << float_value15 / float_value2 << endl; //неявное преобразование типов данных
    cout << "15.0 / 2   = " << 15.0 / 2 << endl  // явное преобразование типа данных, число 15.0 - число с плавающей точкой
         << "15   / 2.0 = " << 15 / 2.0 << endl; // явное преобразование типа данных, число 2.0  - число с плавающей точкой
    cout << "float(int_value15) / int_value2 = " << float(int_value15) / int_value2 << endl // явное преобразование типа данных
         << "15 / double(2) = " << 15 / double(2) << endl;                                    // используя приводимый тип как функцию
    cout << "static_cast<float>(15) / 2 = " << static_cast<float>(15) / 2 << endl // унарная операция приведения типа
         << "static_cast<char>(15) = " << static_cast<char>(15) << endl  // можно печатать различные символы из таблицы ASCII,
         << "static_cast<char>(20) = " << static_cast<char>(20) << endl; // в скобочках прописываем код символа, который находим в таблице ASCII
    system("pause");
    return 0;
}
