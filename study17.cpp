/******************************************************************************
Модуль math
*******************************************************************************/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
//#include <math.h>
#include <string>
#include <clocale>

using namespace std;

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    double a = 5;
    
    // Округление
    printf("%lf", round(a)); cout << " -> Округляет число по правилам арифметики\n";
    printf("%lf", floor(a)); cout << " -> Округляет число вниз\n";
    printf("%lf", ceil(a)); cout << " -> Округляет число вверх\n";
    printf("%lf", trunc(a)); cout << " -> Округление в сторону нуля\n";
    printf("%lf", fabs(a)); cout << " -> Модуль\n";
    
    //Корни, степени, логарифмы
    printf("%lf", sqrt(a)); cout << " -> Квадратный корень\n";
    printf("%lf", cbrt(a)); cout << " -> Кубический корень\n";
    printf("%lf", pow(a,a)); cout << " -> Возведение в степень, возвращает a^b\n";
    printf("%lf", log(a)); cout << " -> Экспонента, возвращает e^x\n";
    printf("%lf", log10(a)); cout << " -> Натуральный логарифм\n";
    printf("%lf", exp(a)); cout << " -> Десятичный логарифм\n";
    
    //Тригонометрия
    printf("%lf", sin(a)); cout << " -> Синус угла, задаваемого в радианах\n";
    printf("%lf", cos(a)); cout << " -> Косинус угла, задаваемого в радианах\n";
    printf("%lf", tan(a)); cout << " -> Тангенс угла, задаваемого в радианах\n";
    printf("%lf", asin(a)); cout << " -> Арксинус, возвращает значение в радианах\n";
    printf("%lf", acos(a)); cout << " -> Арккосинус, возвращает значение в радианах\n";
    printf("%lf", atan(a)); cout << " -> Арктангенс, возвращает значение в радианах\n";
    
    cout << endl;

    return 0;
}
