/*
Динамический массив
int *ptrvalue = new int;
delete ptrvalue
*/


#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
	int *ptrvalue = new int;
	*ptrvalue = 55;
	//int *ptrvalue = new int (9); инициализация может выполнятся сразу при объявлении динамического объекта
	cout << "ptrvalue = " << *ptrvalue << endl;
	delete ptrvalue;
	return 0;
}
