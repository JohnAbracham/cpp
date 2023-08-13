/*
Игра с указателями
*/

#include <iostream>

using namespace std;

int main(){

	int a = 999;
	int *a1 = &a;
	int **a2 = &a1;

	cout << "a:" << a << "\n";
//	cout << "*a: " << *a << "\n"; //Нельзя
	cout << "&a: " << &a << "\n";

	cout << "a1: " << a1 << "\n";
	cout << "*a1: " << *a1 << "\n";
	cout << "&a1: " << &a1 << "\n";

        cout << "a2: " << a1 << "\n";
        cout << "*a2: " << *a1 << "\n";
	cout << "**a2: " << **a2 << "\n";
        cout << "&a2: " << &a1 << "\n";


	return 0;

}
