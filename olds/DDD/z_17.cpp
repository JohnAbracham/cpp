#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "Введи либое двухзначное целое число: ";
	cin >> a;
	if(a/10>a%10){
		cout << "Большее число " << a/10 << "\n";
		cout << "Меньшее число " << a%10 << "\n";
	} else if(a/10 < a%10) {
		cout << "Большее число " << a%10 << "\n";
		cout << "Меньшее число " << a/10 << "\n";
	} else {
		cout << "Числа равны!";
	}
	return 0;
}

