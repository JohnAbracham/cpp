/*
Исключения в С++ (exception)
try
 throw 
catch

*/

#include <iostream>

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "rus");
 
    int num1;
    int num2;
    int var = 2; //управляющая переменная для while
 
    while(var--) //пока var - истина (не равно 0)
    {
        cout << "Введите значение num1: ";
        cin >> num1;
        cout << "Введите значение num2: ";
        cin >> num2;
 
        cout << "num1 + num2 = " << num1 + num2 << endl;
        cout << "num1 / num2 = ";

	try{
		if(num2 == 0){
			throw 10;
		}
		cout << num1 / num2 << endl;
	} catch(int a) {
		cout << a << endl;
	}


        cout << "num1 - num2 = " << num1 - num2 << endl;
        cout << "=================================" << endl << endl;
    }
 
    cout << "Программа завершила работу!" << endl << endl;
 
return 0;
}
