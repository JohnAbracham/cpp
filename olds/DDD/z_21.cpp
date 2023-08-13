#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	cout << "Поразрядный оператор & 12 & 3 " << (12&3) << "\n";
	cout << "Поразрядный оператор ^ 15 ^ 8 " << (15^8) << "\n";
	cout << "Поразрядный оператор | 10 | 6 " << (10|6) << "\n";
	return 0;
}
