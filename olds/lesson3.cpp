/*
Управляющие символы:
\r - возврат каретки в начало строки
\n - новая строка
\t - горизонтальная табуляция
\v - вертикальная табуляция
\" - двойные ковычки
\' - апостроф
\\ - обратный слэш
\0 - нулевой символ
\? - знак вопроса
\a - сигнал бипера(звук)
*/
#include <iostream>

using namespace std;

int main(){
	cout << "world!!!\rHello ";
	cout << "\n";
	cout << "Horisontal\t tab";
	cout << "Vertical\v tab";
	cout << "\n";
	cout << "\" \' \\ \0 \? \a";
	cout <<"\n";
	return 0;
}
