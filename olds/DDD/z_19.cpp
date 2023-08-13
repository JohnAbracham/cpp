#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,a1;
	cout << "\t\tВведи любое техзначное число\n";
	cout << "Число - ";
	cin >> a;
	a1=a%100;
	if(a/100 == a1/10 || a/100 == a1%10 || a1/10==a1%10){
		cout << "Есть одинаковые числа";
	}
	return 0;
}
