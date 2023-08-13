/*
Ссылки и указатели
*/

#include <iostream>

using namespace std;

int sum_by_value(int );
int sum_by_reference(int &);
int sum_by_pointer(int *);

int main(int argc, char* argv[]){
    int value = 10;
    cout << "sum_by_value     = " << sum_by_value(value)     << endl;
    cout << "value = " << value   << endl; // значение переменной осталось неизменным
    cout << "sum_by_reference = " << sum_by_reference(value) << endl;
    cout << "value = " << value   << endl; // значение переменной изменилось
    cout << "sum_by_pointer     = " << sum_by_pointer(&value)  << endl;
    cout << "value = " << value   << endl; // значение переменной изменилось ещё раз
    system("pause");
    return 0;
}

int sum_by_value(int value){
	value += value;
	return value;
}

int sum_by_reference(int &reference){
	reference += reference;
	return reference;
}

int sum_by_pointer(int *ptrvalue){
	*ptrvalue += *ptrvalue;
	return *ptrvalue;
}
