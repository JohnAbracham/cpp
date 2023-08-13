#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	cout.unsetf(ios::dec);//снять десятиричную
	cout.setf(ios::hex);// установить шеснадцеричную
	int a;
	cin >> a;
	cout << a << endl;
	return 0;
}
