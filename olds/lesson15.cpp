/*
Оператор множественного выбора switch
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  int count; // переменная для выбора в switch
  double a,b; // переменные для хранения операндов
  cout << "Vvedite pervoe chislo: ";
  cin >> a;
  cout << "Vvedite vtoroe chislo: ";
  cin >> b;
  cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
  cin >> count;
	switch(count)
	{
	case 1:
	{
		cout << a << " + " << b << " = " << a + b << endl; // выполнить сложение
		break;
	}
	case 2:{ 	
		cout << a << " - " << b << " = " << a - b << endl; // выполнить вычитание
		break;
	}
	case 3:{
		cout << a << " * " << b << " = " << a * b << endl; // выполнить умножение
		break;
	}
	case 4:{
		cout << a << " / " << b << " = " << a / b << endl; // выполнить деление
		break;
	}
	default:{
		cout << "Nepravilni vvod" << endl;
	}
	}
}
