#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,b;
	cout << "¬веди число 1 - ";
	cin >> a;
	cout << "¬веди число 2 - ";
	cin >> b;
	if(a > b){
		cout << "„исло 1 больше числа 2";
	} else if (b > a){
		cout << "„исло 2 больше числа 1";
	} else {
		cout << "числа одинаковы";
	}
	return 0;
}
