/*
Генератор случайных чисел rand()
*/

#include <iostream>
 //Константа RAND_MAX

using namespace std;

int main(int argc,char* argv[]){
	cout << "RAND_MAX(cstdlib): " << RAND_MAX << endl; //
	cout << "random number = " << rand() << endl;
	system("pause");
	return 0;
	/*
// пример масштабирования диапазона генерации случайных чисел
	rand() % 3 +1; // диапазон равен от 1 до 3 включительно
*/



}
