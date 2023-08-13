#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,b,c,d;
	cout << "Введите любое число: ";
	cin >> a;
	cout << "\n";
	for(int i = 1; i <= a; i++){
		if(i%5 == 0){
			b += i;
		}
	}
	d = 0;
	while(d <= a){
		if(d%5 == 0){
			c+=d;
		}
		d++;
	}
	cout << "Сумма чисел нацело делящихся на 5(if): " << b << endl;
	cout << "Сумма чисел нацело делящихся на 5(while): " << c << endl;
	return 0;
}
