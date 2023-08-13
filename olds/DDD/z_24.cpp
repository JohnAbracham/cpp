#include <iostream>
using namespace std;

void WriteNumber(int a){
	switch(a){
		case 1:{
			cout << "Понедельник";
			break;
		}
		case 2:{
			cout << "Вторник";
			break;
		}
		case 3:{
			cout << "Среда";
			break;
		}
		case 4:{
			cout << "Четверг";
			break;
		}
		case 5:{
			cout << "Пятница";
			break;
		}
		case 6:{
			cout << "Суббота";
			break;
		}
		case 7:{
			cout << "Воскресенье";
			break;
		}
		default: {
			cout << "Ты, мужчина или женьщина, что такое себе позволяешь?! Вне диапазона решил повыпендриваться?!";
			break;
		}
	}
}

int main(){
	setlocale(LC_ALL,"RUS");
	int i;
	cout << "1 - понедельник\n";
	cout << "2 - вторник\n";
	cout << "3 - среда\n";
	cout << "4 - четверг\n";
	cout << "5 - пятница\n";
	cout << "6 - суббота\n";
	cout << "7 - воскресенье\n";
	cout << "Введите номер: ";
	cin >> i;
	WriteNumber(i);
	return 0;
}
